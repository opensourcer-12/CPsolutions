t=int(input())
while(t):
    t-=1
    s1=input()
    s2=input()
    diff1=0
    diff2=0
    for i in range(len(s1)):
        if s1[i] == s2[i] and s1[i] == s2[i] != "?":
            diff1 += 1
                
    for x in range(len(s1)):
        if s1[x] == s2[x] or s1[x] == "?" or s2[x] == "?":
            diff2 += 1
    print(len(s1)-diff2,len(s1)-diff1, )
