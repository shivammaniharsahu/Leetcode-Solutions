# Maximum Area Rectangle in Binary Matrix
n=int(input())
m=int(input())
li=[]
cans=[]
for i in range(n):
    r=[]
    for j in range(m):
        k=int(input())
        r.append(k)
    li.append(r)
lis=[]
for i in range(m):
    lis.append(0)
c1=0
for i in range(n):
    for j in range(m):
        if(li[i][j]==1):
            c1=li[i][j]+lis[j]
            lis[j]=c1
        else:
            lis[j]=0
    s1=[]
    s2=[]
    ri=[]
    le=[]
    wi=[]
    ans=[]
    for z in range(m):
        a=[]
        if(len(s1)==0):
            le.append(-1)
        elif(len(s1)>0 and s1[len(s1)-1][0]<lis[z]):
            le.append(s1[len(s1)-1][1])
        elif(len(s1)>0 and s1[len(s1)-1][0]>=lis[z]):
            while(len(s1)>0 and s1[len(s1)-1][0]>=lis[z]):
                s1.pop()
            if(len(s1)==0):
                le.append(-1)
            else:
                le.append(s1[len(s1)-1][1])
        a.append(lis[z])
        a.append(z)
        s1.append(a)
    d=m-1
    while(d>=0):
        b=[]
        if(len(s2)==0):
            ri.append(m)
        elif(len(s2)>0 and s2[len(s2)-1][0]<lis[d]):
            ri.append(s2[len(s2)-1][1])
        elif(len(s2)>0 and s2[len(s2)-1][0]>=lis[d]):
            while(len(s2)>0 and s2[len(s2)-1][0]>=lis[d]):
                s2.pop()
            if(len(s2)==0):
                ri.append(m)
            else:
                ri.append(s2[len(s2)-1][1])
        b.append(lis[d])
        b.append(d)
        s2.append(b)
        d=d-1
    ri.reverse()
    for f in range(m):
        y=ri[f]-le[f]-1
        wi.append(y)
    for g in range(m):
        an=wi[g]*lis[g]
        ans.append(an)
    cans.append(max(ans))
print(max(cans))
