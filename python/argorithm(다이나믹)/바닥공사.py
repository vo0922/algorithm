n = int(input())

d = [0] * 1001

# 점화식 a(i) = a(i-1) + 2 * a(i-2)
# 보텀업
d[1] = 1
d[2] = 3
for i in range(3, n + 1):
  d[i] = d[i-1] + 2 * d[i - 2] %796796

print(d[n])