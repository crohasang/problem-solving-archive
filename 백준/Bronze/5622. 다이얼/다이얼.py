import sys

N = sys.stdin.readline().strip()

a = []
count = 0;

for i in range(len(N)):
    a.append(ord(N[i]))

for i in range(len(N)):
    if(a[i]>= 65 and a[i] <= 67):
        count=count+3
    elif(a[i]>=68 and a[i]<= 70):
        count=count+4
    elif(a[i]>=71 and a[i]<= 73):
        count=count+5
    elif(a[i]>=74 and a[i]<=76):
        count=count+6
    elif(a[i]>=77 and a[i]<=79):
        count=count+7
    elif(a[i]>=80 and a[i]<=83):
        count=count+8
    elif(a[i]>=84 and a[i]<=86):
        count=count+9
    elif(a[i]>=87 and a[i]<=90):
        count=count+10

print(count)