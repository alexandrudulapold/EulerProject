import math

def prime(nr):
    for i in range(3,int(math.sqrt(nr))+1,2):
        if nr%i==0: return False
    return True

maxi = 0

for j in range(1,int(math.sqrt(600851475143)),2):
    if prime(j)==True and 600851475143%j==0: maxi = j;
print(maxi)
