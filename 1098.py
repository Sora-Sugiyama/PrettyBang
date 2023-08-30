A=[]
for i in range(10):A.append(list(map(int,input().split())))
x,y=1,1
if A[1][1]!=2:A[1][1]=9
while 1:
    if A[1][1]==2:
        A[1][1]=9
        break
    flag=True
    if y<9:
        if A[x][y+1]==0:
            y+=1
            A[x][y]=9
            flag=False
        elif A[x][y+1]==2:
            A[x][y+1]=9
            break
    if x<9 and flag:
        if A[x+1][y]==0:
            x+=1
            A[x][y]=9
            flag=False
        elif A[x+1][y]==2:
            A[x+1][y]=9
            break
    if flag:break
  
for i in range(10):
    for j in range(10):print(A[i][j],end=' ')
    print()
