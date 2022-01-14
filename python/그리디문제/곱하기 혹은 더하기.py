s = input()

result = 0

m = list(map(int, s))

for i in m:
  if i > 1 and result > 1:
     result *= i
  else:
    result += i

print(result)