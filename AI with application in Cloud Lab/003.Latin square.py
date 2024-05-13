def latin_square(n):
    if n <= 0:
        return None
# square = [[0] * n for _ in range(n)] - Creates an n x n matrix (list of lists) filled with zeros. This will be the Latin square.
    square = [[0] * n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            square[i][j] = (i + j) % n + 1

    return square

# Example usage
n = 5
square = latin_square(n)
if square:
    for row in square:
        print(row)
else:
    print("Invalid input. Please provide a positive integer.")
