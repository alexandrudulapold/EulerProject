import time
timing1=time.time()


def prime(x):
    for i in range(3,int(x**0.5)+1,2):
        if x%i==0: return False
    return True

n=10**6*2
sum=5

for i in range(5,n,2):
    if prime(i) == True: sum+=i

print(sum)

print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')