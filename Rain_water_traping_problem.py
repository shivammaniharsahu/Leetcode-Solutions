# Rain Water Trapping Problem.
n=int(input())
l=list(map(int,input().split()))[:n]
mxl=[]
mxr=[]
s1=[l[0]]
s2=[l[n-1]]
for i in range(n):
    if(s1[len(s1)-1]>l[i]):
        mxl.append(s1[len(s1)-1])
    else:
        s1.pop()
        mxl.append(l[i])
        s1.append(l[i])
for ele in reversed(l):
    if(s2[len(s2)-1]>ele):
        mxr.append(s2[len(s2)-1])
    else:
        s2.pop()
        mxr.append(ele)
        s2.append(ele)
mxr.reverse()
ans=0
for i in range(n):
    if(l[i]!=mxl[i] and l[i]!=mxr[i]):
        k=min(mxl[i],mxr[i])
        re=abs(k-l[i])
        ans=ans+re
print(ans)
