n, m = map(int, input().split())

k = list(map(int, input().split()))

result = 0

for i in range(n - 1):
  for j in range(i + 1, n):
    if k[i] != k[j]:
      result += 1
    
print(result)

# 2중 for문 안쓰는 방법
n, m = map(int, input().split())
k = list(map(int, input().split()))
weight_list = [0]*(m + 1)

for i in k:
  weight_list[i] += 1

result = 0

for i in range(1, m + 1):
  n -= weight_list
  result += weight_list[i] * n

print(result)
