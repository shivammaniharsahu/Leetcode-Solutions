n=int(input())
l=list(map(int,input().split()))
s=[]
r=[]
c=0
for i in range(n):
    a=[]
    if(len(s)==0):
        r.append(1)
    elif(len(s)>0 and s[len(s)-1][0]>l[i]):
        r.append(s[len(s)-1])
    elif(len(s)>0 and s[len(s)-1][0]<=l[i]):
        while(len(s)>0 and s[len(s)-1][0]<=l[i]):
            s.pop()
        if(len(s)==0):
            r.append(1)
        else:
            r.append(s[len(s)-1])
    a.append(l[i])
    a.append(i)
    s.append(a)
for i in range(1,len(r)):
    if(r[i]==1):
        print(r[i],end=" ")
    else:
        c=abs(r[i][1]-i)
        print(c,end=" ")
