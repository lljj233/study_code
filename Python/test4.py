m = int(input('输入分钟数：'))
y = m//525600
if y==0:
    d=m//1440
    if d==0:
        h = m//60 
        s = m%60
    else:
        a=m-d*1440
        h = a//60 
        s = a%60
else:
    b=m-y*525600                                       
    d=b//1440
    if d==0:
        h = b//60 
        s = b%60
    else:
        e=b-d*1440
        h = e//60 
        s = e%60    
print(m,"分钟代表",y,"年",d,"天",h,"小时",s,"分钟")