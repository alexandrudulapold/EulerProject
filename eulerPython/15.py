import time
timing1=time.time()


# (m+n)! / (m!n!)

def factorial(nr):
    f=1
    for i in range(2,nr+1):
        f*=i
    return f

n=20


print((factorial(n+n)) / ((factorial(n))*(factorial(n))))




print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')