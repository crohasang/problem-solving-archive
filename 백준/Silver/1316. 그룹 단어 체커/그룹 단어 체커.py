a = int(input())
count = 0
for i in range(a):
    b = input()
    error = 0
    for j in range(len(b)-1):
        if(b[j] != b[j+1]):
            new_b = b[j+1:]
            if(new_b.count(b[j])) > 0:
                error = error + 1

    
    if(error == 0):
        count = count + 1

print(count)