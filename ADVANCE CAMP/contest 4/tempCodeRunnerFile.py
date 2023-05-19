import math
def is_prime(num):
    if num<2:
        return False
    for i in range(2,int(math.sqrt(num))+1):
        if num%i==0:
            return False
    return True
def primeNum(n):
    cnt=0
    num=2
    while cnt<n:
        if is_prime(num):
            cnt+=1
        num+=1
    return num-1

test=int(input())
while test>0:
    num=int(input())
    print(primeNum(num))
    test-=1