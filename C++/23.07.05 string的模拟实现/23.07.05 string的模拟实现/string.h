#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<assert.h>


namespace bit
{
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		const_iterator begin() const
		{
			return _str;
		}

		const_iterator end() const
		{
			return _str + _size;
		}

		/*string()//无参构造
			:_str(new char[1])
			, _size(0)
			, _capacity(0 )
		{
			_str[0] = '\0';
		}*/
		

		/*string(const char* str)//有参构造
			:_str(new char[_capacity + 1])
			, _size(strlen(str))
			, _capacity(_size)
		{
			strcpy(_str, str);
		}*/

		string(const char* str = "")//合并有参和无参为全缺省
			:_str(new char[_capacity + 1])
			, _size(strlen(str))
			, _capacity(_size)
		{
			//strcpy(_str, str);
			memcpy(_str, str, _size + 1);
		}

		string(const string& s)
		{
			_str = new char[s._capacity + 1];
			//strcpy(_str, s._str);
			memcpy(_str, s._str, s._size + 1);
			_size = s._size;
			_capacity = s._capacity;
		}

		/*string(const string& s)
			:_str(nullptr)
			,_size(0)
			,_capacity(0)
		{
			string tmp(s._str);
			swap(tmp);
		}*/

		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}

		/*string& operator=(const string& s)
		{
			if (this != &s)
			{
				char* tmp = new char[s._capacity + 1];
				memcpy(tmp, s._str, s._size + 1);
				delete[] _str;
				_str = tmp;
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}*/

		/*string& operator=(const string& s)
		{
			if (this != &s)
			{
				string tmp(s);
				//this->swap(tmp);
				swap(tmp);
			}
			return *this;
		}*/

		string& operator=(string tmp)
		{
			swap(tmp);
			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		const char* c_str() const
		{
			return _str;
		}

		size_t size() const
		{
			return _size;
		}

		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}

		const char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}

		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];
				//strcpy(tmp, _str);
				memcpy(tmp, _str, _size + 1);
				delete[] _str;
				_str = tmp;
				_capacity = n;
			}
		}

		void resize(size_t n, char ch = '\0')
		{
			if (n<_size)
			{
				_size = n;
				_str[_size] = '\0';
			}
			else
			{
				reserve(n);
				for (size_t i = _size; i < n; i++)
				{
					_str[i] = ch;
				}
				_size = n;
				_str[_size] = '\0';
			}
		}

		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				reserve(_capacity == 0 ? 4 : _capacity * 2);
			}
			_str[_size] = ch;
			_size++;
			_str[_size] = '\0';
		}

		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			//strcpy(_str + _size, str);
			memcpy(_str + _size, str, len + 1);
			_size += len;
		}

		string& operator += (char ch)
		{
			push_back(ch);
			return *this;
		}

		string& operator += (const char* str)
		{
			append(str);
			return *this;
		}

		void insert(size_t pos, size_t n, char ch)
		{
			assert(pos <= _size);
			if (_size + n > _capacity)
			{
				reserve(_size + n);
			}
			//挪数据
			/*int end = _size;
			while (end >= (int)pos)
			{
				_str[end + n] = _str[end];
				--end;
			}*/
			size_t end = _size;
			while (end >= pos && end != npos)
			{
				_str[end + n] = _str[end];
				--end;
			}
			for (size_t i = 0; i < n; i++)
			{
				_str[pos + i] = ch;
			}
			_size += n;
		}

		void insert(size_t pos, const char* str)
		{
			assert(pos <= _size);
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			size_t end = _size;
			while (end >= pos && end != npos)
			{
				_str[end + len] = _str[end];
				--end;
			}
			for (size_t i = 0; i < len; i++)
			{
				_str[pos + i] = str[i];
			}
			_size += len;
		}

		void erase(size_t pos, size_t len = npos)
		{
			assert(pos <= _size);
			if (len == npos || pos + len >= _size)
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				size_t end = pos + len;
				while (end <= _size)
				{
					_str[pos++] = _str[end++];
				}
				_size -= len;
			}
		}

		size_t find(char ch, size_t pos = 0)
		{
			for (size_t i = pos; i < _size; i++)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return npos;
		}

		size_t find(const char* str, size_t pos = 0)
		{
			assert(pos < _size);
			const char* ptr = strstr(_str, str);
			if (ptr)
			{
				return ptr - _str;
			}
			else
			{
				return npos;
			}
			return npos;
		}

		string substr(size_t pos = 0, size_t len = npos)
		{
			size_t n = len;
			if (len == npos && pos + len > _size)
			{
				n = _size - pos;
			}
			string tmp;
			tmp.reserve(n);
			for (size_t i = pos; i < pos + n; i++)
			{
				tmp += _str[i];
			}
			return tmp;
		}

		void clear()
		{
			_str[0] = '\0';
			_size = 0;
		}

		bool operator<(const string& s) const
		{
			//size_t i1 = 0;
			//size_t i2 = 0;
			//while (i1 < _size && i2 < s._size)
			//{
			//	if (_str[i1] < s._str[i2])
			//	{
			//		return true;
			//	}
			//	else if (_str[i1] > s._str[i2])
			//	{
			//		return false;
			//	}
			//	else
			//	{
			//		++i1;
			//		++i2;
			//	}
			//}
			///*if (i1 == _size && i2 != s._size)
			//{
			//	return true;
			//}
			//else
			//{
			//	return false;
			//}*/
			////return i1 == _size && i2 != s._size;
			//return _size < s._size;

			int ret = memcmp(_str, s._str, _size < s._size ? _size : s._size);
			return ret == 0 ? _size < s._size : ret < 0;
		}

		bool operator==(const string& s) const
		{
			return _size == s._size && memcmp(_str, s._str, _size) == 0;
		}

		bool operator<=(const string& s) const
		{
			return *this < s || *this == s;
		}

		bool operator>(const string& s) const
		{
			return !(*this <= s);
		}

		bool operator!=(const string& s) const
		{
			return !(*this == s);
		}

	private:
		size_t _size;
		size_t _capacity;
		char* _str;

		static size_t npos;
	};
	size_t string::npos = -1;


	ostream& operator<<(ostream& out, const string& s)
	{
		for (size_t i = 0; i < s.size(); i++)
		{
			out << s[i];
		}
		/*for (auto ch : s)
		{
			out << ch;
		}*/
		return out;
	}
	istream& operator>>(istream& in, string& s)
	{
		s.clear();
		char ch = in.get();
		//处理缓冲区前面的空格或者换行
		while (ch == ' ' || ch == '\n')
		{
			ch = in.get();
		}
		//cin >> ch;
		char buff[128];
		int i = 0;
		while (ch != ' ' && ch != '\n')
		{
			buff[i++] = ch;
			if (i == 127)
			{
				buff[i] = '\0';
				s += buff;
				i = 0;
			}
			//s += ch;
			//in >> ch;
			ch = in.get();
		}
		if (i != 0)
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}
};

