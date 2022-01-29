import math

def is_prime_number(x):
  for i in range(2, int(math.sqrt(x)) + 1):
    if x % i == 0:
      return False
  return True

m, n = map(int, input().split())

k = 3
prime_number = []

while k <= n:
  if is_prime_number(k):
    prime_number.append(k)
  k += 1

for i in prime_number:
  print(i)