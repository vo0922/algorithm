import itertools

l, c = map(int, input().split())

vowels = ('a', 'e', 'i', 'o', 'u')
char = input().split(' ')

char.sort()

for p in itertools.combinations(char, l):
  count = 0
  for i in p:
    if i in vowels:
      count += 1
  if count >= 1 and count <= l - 2:
    print(''.join(p))