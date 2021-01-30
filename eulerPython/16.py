import time
timing1=time.time()


nr=2**1000
nr = str(nr)
l=(len(nr))

sum=0
for i in range(l):
    sum+=int(nr[i])

print(sum)





print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')