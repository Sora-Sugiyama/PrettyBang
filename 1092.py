cnt=[0]*25
n=int(input())
A=list(map(int,input().split()))
for i in A:cnt[i]+=1
for i in range(1,24):print(cnt[i],end=' ')
