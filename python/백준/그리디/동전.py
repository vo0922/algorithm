n, k = map(int, input().split())
array = []

count = 0

for _ in range(n):
  array.append(int(input()))

for i in reversed(range(n)):
  count += k//array[i]
  k %= array[i]

print(count)
