N, M = map(int, input().split())

array = list(map(int, input().split()))

# 시작점과 끝점
start = 0
end = max(array)

result = 0

# 이진탐색
while(start <= end):
  total = 0
  mid = (start + end) // 2
  for x in array :
    # 잘랐을 때의 떡의 양 계산
    if x > mid:
      total += x - mid
  
  if total < M :
    end = mid - 1
  else:
    result = mid
    start = mid + 1

print(result)