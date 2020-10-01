# 0-1 KnapSack

def knapsack(wt,val,W,n):
    t=[]
    for i in range(n+2):
        x=[]
        for j in range(W+2):
            x.append(0)
        t.append(x)
    
    for i in range(1,n+1):
        for j in range(1,W+1):
            if(wt[i-1]<=j):
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j])
            else:
                t[i][j]=t[i-1][j]
    return t[n][W]

## DRIVER CODE ###
wt=[1,2,3,5]
val=[1,3,4,5]
W=7
print(knapsack(wt,val,W,len(wt)))

##output --->> 8