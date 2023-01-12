import sys
S = sys.stdin.readline().strip()
alphabet = []

for i in range (0,26):
    alphabet.append(-1)

for i in range (len(S)):
    if(alphabet[ord(S[i]) - 97] == -1):
        alphabet[ord(S[i]) - 97] = i

for i in alphabet:
    print(i, end = ' ')
