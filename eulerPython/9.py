import time
timing1=time.time()


for a in range(1,1000):
    for b in range(a+1,1000):
        #  c = sqrt(c**2)
        c = (a**2 + b**2)**0.5
        sum = a + b + c

        if sum != 1000: continue
        else: prod =int(a * b * c);print(a);print(b);print(c)


print(prod)


print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')