a=[1,2,3,4]
number=[]
count=0
for b in a:
    for c in a:
        for d in a:
            number.append(b*100+c*10+c)
            count+=1

print(f"可以组成 {count}个数\n")
number.sort()
print(number)