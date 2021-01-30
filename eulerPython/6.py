import time
timing1=time.time()

n=100
sum1=0
s=0
sum2=0
sumtot=0

for i in range(1,n+1):
    sum1+=i**2
    s+=i
sum2=s**2

sumtot=sum2-sum1
print(sumtot)

print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')