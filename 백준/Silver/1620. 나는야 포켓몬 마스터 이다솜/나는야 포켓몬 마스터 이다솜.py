import sys

N, M = map(int, sys.stdin.readline().split(" "))

dogam = {}
dogam_reversed = {}

for i in range(N):
    pokemon_name = sys.stdin.readline().strip()
    dogam[i] = pokemon_name
    dogam_reversed[pokemon_name] = i 

for i in range(M):
    question = sys.stdin.readline().strip()
    if question.isdigit():
        print(dogam.get(int((question)) - 1))
    else:
        print(dogam_reversed.get(question) + 1)