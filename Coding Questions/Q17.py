def find_row_with_max_full_spaces(matrix):
    max_count = -1
    row_index = -1

    for i in range(len(matrix)):
        count = matrix[i].count(1)
        if count > max_count:
            max_count = count
            row_index = i + 1  # since row index should be 1-based
    
    return row_index

# Example usage
R = int(input("Enter the number of rows (R): "))
C = int(input("Enter the number of columns (C): "))

matrix = []
print("Enter the elements of the matrix:")
for i in range(R):
    row = list(map(int, input().split()))
    matrix.append(row)

result = find_row_with_max_full_spaces(matrix)
print(result)
