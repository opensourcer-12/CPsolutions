t = int(input())
for _ in range(t):
    x = input()
    y = input()
    c=0
    for i in range(len(x)):
        if x[i] == '?' or y[i] == '?':
            continue
        elif x[i]!=y[i]:
            c+=1
            print('No')
            break
    if c==0:
        print('Yes')
