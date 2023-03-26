링크 : https://softeer.ai/practice/info.do?idx=1&eid=584

---


## 문제 설명

빌딩에서 운영되는 엘리베이터 구간은 N개의 구간으로 나뉘며 해당 구간의 제한 속도이 주어진다. 구간의 총 합은 100m 이며 각 구간별 구간의 길이와 제한 속도 모두 양의 정수로 주어진다.

예를 들어보자. 구간이 3이라고 할 때,
▶ 첫 번째 구간의 길이는 50m 이고 제한 속도는 50m/s
▶ 두 번째 구간의 길이는 40m 이고 제한 속도는 40m/s
▶ 세 번째 구간의 길이는 10m 이고 제한 속도는 30m/s
이 구간에서 제한 속도를 벗어나면(즉 제한속도를 초과하면) 서버에 초과한만큼의 속도가 로그에 남는다. 불행하게도 현재 서버의 상태가 off 상태임으로 광우는 서버의 데이터를 받아볼 수가 없다. 광우는 임의의 구간의 길이와 속도를 정하여 시범운행 할 때, 가장 제한 속도가 크게 벗어난 값을 스스로 구해야 한다.

M개의 구간을 검사한다고 할 때 예를 들면,
▶ 첫 번째 구간의 운행 길이는 60m 이고 속도는 76m/s
▶ 두 번째 구간의 운행 길이는 18m 이고 속도는 28m/s
▶ 세 번째 구간의 운행 길이는 22m 이고 속도는 50m/s이라고 했을 때, 제한 속도를 벗어나 가장 차이가 큰 속도를 구해 보자.

첫번째 구간 50m 까지에서 제한 속도와 실제 운행 속도를 비교했을 때, 제한 속도를 26m/s 초과했다. 이후 두번째 구간과 실 운행한 첫번째 구간이 10m 정도 겹치는데, 이때 제한 속도를 36m/s 초과하게 된다.

그 이후 구간들에서는 차이가 그보다 크지 않으므로 가장 큰 속도 차이는 36m/s임을 알 수 있다.
주어진 구간의 제한속도와 광우가 테스트한 구간의 속도를 기준으로 가장 크게 제한 속도를 넘어간 값이 얼마인지 구해보자.

---

## 제약 조건

1≤ N, M ≤100

---

## 입력 형식

첫 줄에 N과 M이 주어진다. 그 다음 줄부터 N개의 줄은 각 구간의 길이 및 해당 구간에서의 제한 속도가 주어지며, 다음 M개의 줄은 광우가 테스트하는 구간의 길이와 속도가 주어진다.

---

## 출력 형식

광우가 시범운행을 하는 동안 제한 속도를 가장 크게 벗어난 값을 출력 한다. 단 제한 속도를 벗어나지 않은 경우는 0을 출력 한다.

---

## 내 코드

```python
import sys


N, M = map(int, sys.stdin.readline().split())

road_arr = [0]*100
test_arr = [0]*100
road = []
test = []

# 도로의 입력을 받아 1~100까지 m당 제한속도로 채워진 어레이를 제작
for i in range(N):
    r_len, r_limit = map(int, sys.stdin.readline().split())
    road.append([r_len,r_limit])
start = 0
for i in road:
    for j in range(i[0]):
        road_arr[start + j] = i[1]
    start += i[0]


# test에 관한 입력을 받아 1~100까지 m당 속도로 채워진 어레이 제작
for i in range(M):
    test_len, test_vel = map(int, sys.stdin.readline().split())
    test.append([test_len, test_vel])
start = 0
for i in test:
    for j in range(i[0]):
        test_arr[start + j] = i[1]
    start += i[0]

# 100m까지 제한 속도와 차량의 속도로 이루어진 어레이를 이용해 뺄셈을 통해 최대 위반 속도 구하기
max_diff = 0
for i in range(100):
    tmp = test_arr[i] - road_arr[i]
    if  tmp > 0:
        if tmp > max_diff:
            max_diff = tmp
print(max_diff)
        
```

