import sys
N = sys.stdin.readline().strip()
alphabet = []

for i in range(52):
    alphabet.append(0)

for i in range(len(N)):
    a = ord(N[i])
    if(a >= 65 and a <= 90):
        alphabet[a - 65] = alphabet[a-65] + 1
    elif(a >= 97 and a <= 122):
        alphabet[a - 97] = alphabet[a-97] + 1


num = alphabet.index(max(alphabet))

maxcount = 0

for i in range(len(alphabet)):
    if(alphabet[i] == max(alphabet)):
        maxcount = maxcount + 1

if(maxcount >= 2):
    print("?")
else:
    num+= 65
    print(chr(num))
