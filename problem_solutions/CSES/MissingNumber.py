n = int(input())

nums = [int(n) for n in input().split(",")]

# using the sum method

actual_sum = n*(n+1)//2
given_sum = sum(nums)

missing_num = actual_sum-given_sum

print(missing_num)

# using the XOR method

xor = 0

for i in range(n-1):
    xor^=nums[i]
    xor^=(i+1)

xor^=n
print(xor)
