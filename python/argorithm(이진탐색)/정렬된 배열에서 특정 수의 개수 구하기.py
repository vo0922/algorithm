from bisect import bisect_left, bisect_right

def count_by_range(a, left_value, right_value):
  right_index = bisect_right(a, right_value)
  left_index = bisect_left(a, left_value)
  if not right_index - left_index:
    return -1
  else:
    return right_index - left_index

N, X = map(int, input().split())

array = list(map(int, input().split()))

result = 0

result = count_by_range(array, X, X)

print(result)
