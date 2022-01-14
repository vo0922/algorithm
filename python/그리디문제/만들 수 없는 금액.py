n = int(input())

one = list(map(int, input().split()))

one.sort()

target = 1

for i in one:
  if target < i:
    break
  
  target += i

print(target)