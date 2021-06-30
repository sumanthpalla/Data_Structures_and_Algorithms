#This code compiles Karatsuba Multiplication in Recursive Method
#By using Master theorm the time complexity is O(n^log3) or O(n^1.58) which is efficient than school grade algorithm
import math
import sys
def Karatsuba(x,y):
    if(x<10 or y<10):#base_case
        return x*y
    n = max(len(str(x)),len(str(y)))#finding out maximum length of x and y
    division_point = n//2
    a = x//10**(division_point)
    b = x%10**(division_point)
    c = y//10**(division_point)
    d = y%10**(division_point)
    ac = Karatsuba(a,c)
    bd = Karatsuba(b,d)
    ad_plus_bc = Karatsuba(a+b,c+d)-ac-bd
    prod = ac * 10**(2*division_point) + (ad_plus_bc * 10**division_point) + bd
    return prod

if __name__=='__main__':
    #sets recursionlimit
    sys.setrecursionlimit(1000000000)
    x = Karatsuba(111111111111111111111111111111111111111111111111,11111111111111111111111111111111111111111111111111111111111111111111111111)
    print(f'''Karatsuba Multiplication: {x}
                                                           {'*' * 20}
     Normal Multplication Value: {111111111111111111111111111111111111111111111111*11111111111111111111111111111111111111111111111111111111111111111111111111}''')
    #print(x)


