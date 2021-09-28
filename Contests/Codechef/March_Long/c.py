def find2(n): 
    n -= 1
    n |= n >> 1
    n |= n >> 2
    n |= n >> 4
    n |= n >> 8
    n |= n >> 16
    n += 1
    return n 

test_cases = int(input())
for test_case in range(test_cases):
	num = int(input())
	pow2 = find2(num+1)
	
	for i in range(1, pow2+1):
		if num^i <= pow2:
			ans = max(ans, i*(n^i))

	print(ans)

