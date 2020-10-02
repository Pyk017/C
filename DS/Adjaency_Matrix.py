n, m = map(int, input('Enter number of vertices and edges :- ').split())
matrix = [[0 for _ in range(n)] for _ in range(n)]
for _ in range(m):
    v1, v2 = map(int, input().split())
    matrix[v1 - 1][v2  - 1] = 1
    matrix[v2 - 1][v1  - 1] = 1

for i in range(n):
    for j in range(n):
        print(matrix[i][j], end=' ')
    print()
