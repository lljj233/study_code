a = input('请输入一个九位数:')
b = [a[i:i + 3] for i in range(0, len(a), 3)]
c=','.join(b)
print(c)