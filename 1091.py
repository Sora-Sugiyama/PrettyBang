def GCD(x,y):
    z=x%y
    while x%y:z=x%y;x=y;y=z;
    return y
 
a,b,c=map(int,input().split())
lcm=a*b//GCD(a,b)
lcm=lcm*c//GCD(lcm,c)
print(lcm)
