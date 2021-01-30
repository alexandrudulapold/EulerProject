import time
timing1=time.time()



def palindrome(x):
    xstr = str(x)
    if len(xstr) %2 == 0:
        if str(xstr[:int( len(str(xstr)) / 2 ):1]) == str(xstr[:int( len(str(xstr)) / 2 - 1 ):-1]): return True
        else: return False
    else:
        if str(xstr[:int( len(str(xstr)) / 2 ):1]) == str(xstr[:int( len(str(xstr)) / 2 ):-1]): return True
        else: return False

# i = 12321
#
# if palindrome(i) == True:
#     print(i)
# else: print("no")

max = 0
for i in range(100,1000):
     for j in range(100,1000):
        if (palindrome(i*j) == True) and (i*j > max):
            max = i*j

print(max)



print("\n=====================================")
timing2=time.time()
print(round((timing2-timing1),2),'sec')