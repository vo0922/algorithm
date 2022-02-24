n = int(input())
a = list(map(int, input().split()))

plus, minus, product, division = map(int, input().split())

min_value = 1e9
max_value = -1e9

def dfs(i, now):
  global min_value, max_value, plus, minus, product, division
  if i == n:
    min_value = min(min_value, now)
    max_value = max(max_value, now)
  else:
    if plus > 0:
      plus -= 1
      dfs(i + 1, now + a[i])
      plus += 1
    if minus > 0:
      minus -= 1
      dfs(i + 1, now - a[i])
      plus += 1
    if product > 0:
      product -= 1
      dfs(i + 1, now * a[i])
      product += 1
    if division > 0:
      division -= 1
      dfs(i + 1, int(now / a[i]))
      division += 1

dfs(1, a[0])

print(max_value, min_value)