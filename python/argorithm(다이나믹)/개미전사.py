N = int(input())

l = list(map(int, input().split()))

d = [0] * 100

# 점화식 a[i] = max(a[i-1], a[i-2] + k(i))
# 보텀업
d[0] = l[0]
d[1] = max(l[0], l[1])
for i in range(2, N):
  d[i] = max(d[i - 1], d[i - 2] + l[i])

print(d[N - 1])