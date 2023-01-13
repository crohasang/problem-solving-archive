import sys
X = int(sys.stdin.readline())
line = 1
end = 1

while (X>end):
    line = line + 1
    end = end + line

bunja = 0
bunmo = 0
if(line%2==0):
    bunja = line - (end - X)
    bunmo = 1 + (end - X) 
elif(line%2!=0):
    bunja = 1 + (end - X)
    bunmo = line - (end - X)

print(bunja, end='/')
print(bunmo)