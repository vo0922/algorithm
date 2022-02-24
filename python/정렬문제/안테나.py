n = int(input())
home = list(map(int, input().split()))

t_sum = []

for i in range(n):
  a = home[i]
  sum = 0
  for i in range(n):
    sum += abs(a - home[i])
  t_sum.append((sum, a))

t_sum.sort()

print(t_sum[0][1])

# 중간 값 출력
n = int(input())
data = list(map(int, input().split()))
data.sort()

print(data[(n - 1) // 2])
