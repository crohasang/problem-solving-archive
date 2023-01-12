A,B = map(int,input().split())

a1 = int(A/100)
b1 = int((A%100)/10)
c1 = A%10
A = c1*100 + b1*10 + a1

d1 = int(B/100)
e1 = int((B%100)/10)
f1 = B%10
B = f1*100 + e1*10 + d1 

if(A>B):
    print(A)
elif(A<B):
    print(B)