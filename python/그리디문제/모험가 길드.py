n = int(input())
x = []

x = list(map(int, input().split()))

x.sort()

result = 0 
count = 0

for i in x:
  count += 1
  if count >= i:
    result += 1
    count = 0

print(result)