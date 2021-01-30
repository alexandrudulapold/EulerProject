i = 1
pi = 0
sum = 0
while i<4000000:
    i += pi
    pi=i-pi
    if pi%2==0:
        sum += pi
    # print(i)
print(sum)