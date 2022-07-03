n = int(input())
array = []
for _ in range(n):
  start, end = map(int, input().split())
  array.append([start, end])

array = sorted(array, key=lambda x: x[0])
array = sorted(array, key=lambda x: x[1])

last = 0
count = 0

for i, j in array:
  if i >= last:
    count += 1
    last = j

print(count)