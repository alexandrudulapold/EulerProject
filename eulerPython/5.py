import time
timing1=time.time()

n=20
x=n
# 232792560
while 1:

    for i in range(3,n+1):
        if x%i==0: continue
        else: break
    else:
        break
    x+=n

print(x)

print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')