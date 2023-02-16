#字符串的操作
a="张三"
b="吃饭"
print(a+b)# "内容1+内容2"="内容1内容2"
print(a*3)# 将内容重复3次


p="张三abc"
print(p[0]);print(p[1]);print(p[2]);print(p[3]);print(p[4]);
print(p[-5]);print(p[-4]);print(p[-3]);print(p[-2]);print(p[-1]);


g="abcdefg"
print(g[1:5])
print(g[:5])
print(g[5:])
print(g[:])
# 变量[a:b]="变量[a]到变量[b]的部分（不包括变量[b]）"
# g[1:5]="g[1]到g[5]的部分（不包括g[5]）"
# g[:5]="从开头到g[5]的部分（不包括g[5]）"
# g[5:]="从g[5]到结尾的部分（包括结尾）"
# g[:]="所有部分"


k=str(3.14)# k="3.14"
print(k)


x="dshGJK2343"
print(x.upper())# 把x里的小写字母变成大写字母
print(x.lower())# 把x里的大写字母变成小写字母
print(len(x))