import time
timing1=time.time()


def prime(x):
    for i in range(3,int(x**0.5)+1,2):
        if x%i==0: return False
    return True


counter = 2
i = 5
while counter < 10001:
    if prime(i) == True: counter+=1
    i+=2

i-=2
print(i)


print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')