# 1
n = int(input())

array = []
for i in range(n):
  array.append(int(input()))

array.sort()
array.reverse()

for i in array:
  print(i, end=' ')

# 2
n = int(input())

array = []

for i in range(n):
  array.append(int(input()))

array = sorted(array, reverse=True)

for i in array:
  print(i, end=' ')