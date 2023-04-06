
## 이진트리

노드의 자식이 최대 2개밖에 생성되지 트리

### 구현

배열을 활용하여 구현하며 왼쪽 자식의 경우 {자신의 인덱스에} * 2를 해주고 오른쪽 자식일 경우 {자신의 인덱스}* 2 + 1을 해준다. 부모일 경우 {자신의 인덱스}//2 를 통해 배열의 인덱스를 얻는다.

### 탐색

방문 순서에 따라 전위 탐색, 중위 탐색, 후위 탐색으로 분류

* 전위 탐색 : 부모 &rarr; 왼쪽 자식 노드 &rarr; 오른쪽 자식 노드 순으로 탐색
* 중위 탐색 : 왼쪽 자식 노드 &rarr; 부모 &rarr; 오른쪽 자식 노드 순으로 탐색
* 후위 탐색 : 왼쪽 자식 노드 &rarr; 오른쪽 자식 노드 &rarr; 부모 순으로 탐색


이러한 탐색은 재귀를 활용하여 구현

```python
# 전위 탐색 코드

visit_node = []
def preorder(node):
    global visit_node

    if node == None:
        return

    visit_node.append(node)     # 방문한 노드 추가
    preorder(node.left)         # 부모의 왼쪽 노드부터 들어감
    preorder(node.right)    

Preorder(node.root)
```

```python
# 중위 탐색 코드
visit_node = []
def Inorder(node):
    global visit_node

    if node == None:
        return

    Inorder(node.left)   
    visit_node.append(node)
    Inorder(node.right)    

Inorder(node.root)
```

```python
# 후위 탐색 코드
visit_node = []
def Postorder(node):
    global visit_node

    if node == None:
        return

    Postorder(node.left)       
    Postorder(node.right)    
    visit_node.append(node)

Postorder(node.root)
```