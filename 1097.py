h,w=map(int,input().split())
A=[[0 for i in range(w)]for i in range(h)]
n=int(input())
for i in range(n):
    l,d,x,y=map(int,input().split())
    for i in range(l):
        if d:
            if(x+i>h):break
            A[x+i-1][y-1]=1
        else:
            if(y+i>w):break
            A[x-1][y+i-1]=1
for i in range(h):
    for j in range(w):
        print(A[i][j],end=' ')
    print()
