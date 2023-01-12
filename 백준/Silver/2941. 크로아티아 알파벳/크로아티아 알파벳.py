croatia_list = ['c=','c-','dz=','d-','lj','nj','s=','z=']

a = input()

for i in croatia_list:
   a = a.replace(i, 'a')

print(len(a))