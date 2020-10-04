for _ in range(int(input())):
    a=[0,0,0,0,0,0,0,0]
    for i in range(int(input())):
        j,b=map(int,input().split())
        if(j<=8 and a[j-1]<b):
            a[j-1]=b
    print(sum(a))
