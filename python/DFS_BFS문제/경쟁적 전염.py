from collections import deque

n, k = map(int, input().split())

box = []
data = []

for i in range(n):
  box.append(list(map(int, input().split())))
  for j in range(n):
    if box[i][j] != 0:
      data.append((box[i][j], 0, i, j)) 

data.sort()
q = deque(data)

finish_s, finish_x, finish_y = map(int, input().split())

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]


def virus(x, y, s):
  for i in range(4):
    nx = x + dx[i]
    ny = y + dy[i]
    # 상, 하, 좌, 우 중에서 바이러스가 퍼질 수 있는 경우
    if nx >= 0 and nx < n and ny >= 0 and ny < n:
      if box[nx][ny] == 0:
        box[nx][ny] = box[x][y]
        q.append((box[nx][ny], s, nx, ny))

while q:
  v, s, x, y = q.popleft()
  if s == finish_s:
    break
  virus(x, y, s + 1)

print(box)
print(box[finish_x - 1][finish_y - 1])
