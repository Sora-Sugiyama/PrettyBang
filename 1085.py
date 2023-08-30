w,h,b=map(int,input().split());
ans=str(round(w*h*b/8/1024/1024,2))
t1,t2=ans.split('.')
while(len(t2)<2):t2+='0'
print(t1+'.'+t2,'MiB')
