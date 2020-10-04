t = int(input())
for _ in range(t):
    s = input()
    res = {}
    occur = []
    for keys in s:
        res[keys] = res.get(keys,0)+1
    
    if len(res) == 2:
        va = []
        for k,v in res.items():
            va.append(v)
        if va[0]==va[1]:
            print('YES')
        else:
            print('NO')
    else:
        va = []
        for k,v in res.items():
            va.append(v)
        
        
