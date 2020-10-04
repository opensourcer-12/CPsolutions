for _ in range(int(input())):
    c=x=0
    n=int(input())
    a=list(map(int,input().split()))
    for i in range(n):
        if(a[i]==2):
            c+=1
        elif(a[i]==0):
            x+=1
    print(int(c*(c-1)/2+x*(x-1)/2))
