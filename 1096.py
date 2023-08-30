A=[]
for i in range(19):A.append(list(map(int,input().split())))
n=int(input())
for i in range(n):
    x,y=map(int,input().split())
    for j in range(19):
        A[x-1][j]^=1;A[j][y-1]^=1
for i in range(19):
    for j in range(19):
        print(A[i][j],end=' ')
    print()
