# Coin Change Problem

def countCoins(S, m, n ): 
	if (n == 0): 
		return 1

	if (n < 0): 
		return 0; 

	# If there are no coins and n 
	# is greater than 0, then no 
	# solution exist 
	if (m <=0 and n >= 1): 
		return 0
	return countCoins( S, m - 1, n ) + countCoins( S, m, n-S[m-1] ); 

# Driver code
arr = [1, 2, 3] 
m = len(arr) 
print(countCoins(arr, m, 4)) 
