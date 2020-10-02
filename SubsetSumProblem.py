# Subset Sum Problem

def knapsack(num,Sum,n):
    t=[]
    for i in range(n+2):
        x=[]
        for j in range(Sum+2):
            x.append(0)
        t.append(x)
    
    for i in range(0,n+1):
        for j in range(0,Sum+1):
            if(i==0 and j!=0):
                t[i][j]=False
            elif(j==0):
                t[i][j]=True
            elif(num[i-1]<=j):
                t[i][j]=t[i-1][j-num[i-1]] or t[i-1][j]
            else:
                t[i][j]=t[i-1][j]
    return t[n][Sum]

## DRIVER CODE ###
num=[1,2,3,5]
Sum=7
print(knapsack(num,Sum,len(num)))

##output --->> True