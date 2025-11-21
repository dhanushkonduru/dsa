def count_greater_elements(arr):
    if not arr:  
        return 0

    count = 1  
    max_val = arr[0] 

    for i in range(1, len(arr)):
        if arr[i] > max_val:
            count += 1
            max_val = arr[i]
    
    return count

n = int(input("Enter the size of the array (N): "))
arr = []

for i in range(n):
    val = int(input(f"Enter value of Arr[{i}]: "))
    arr.append(val)

result = count_greater_elements(arr)
print(result)
