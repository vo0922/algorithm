n = int(input())
rope = []
result = []

for _ in range(n):
  rope.append(int(input()))

rope.sort(reverse=True)

for i in range(n):
  result.append((i+1)*rope[i])

print(max(result))