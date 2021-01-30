import time
timing1=time.time()

max = 0
for i in range(100,1000):
     for j in range(100,1000):
         a=i*j
         b=int(len(str(a))/2)
         c=str(a)
         for i2 in range (b+1):
             if c[i2]==c[-i2-1]:
                 continue
             else:
                 break
         else :
             if a>max:
                 max=a
print(max)







print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')