import math

def is_prime(num):
    is_prime=[True] * (num+1)
    is_prime[0] =is_prime[1]= False
    for i in range(2, int(math.sqrt(num))+1):
        if is_prime[i]:
            for j in range(i*i, num+1, i):
                is_prime[j] = False
    primeNum=[]
    for i in range(2, num+1):
        if is_prime[i]:
            primeNum.append(i)
    return primeNum

def prime_num(n):
    primeNum=is_prime(200000)
    return primeNum[n-1]

test = int(input())
while test > 0:
    num = int(input())
    print(prime_num(num))
    test -= 1
