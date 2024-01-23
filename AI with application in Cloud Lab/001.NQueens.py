def is_safe(board, row, col):
    for i in range(row):
        # Check if there is a queen in the same column or diagonal
        if board[i] == col or abs(board[i] - col) == abs(i - row):
            return False
    return True

def print_board(board):
    for row in board:
        print(" ".join("Q" if col == row else "0" for col in range(len(board))))
    print()

def solve_n_queens(board, row, N):
    global solution_count
    if row == N:
        # If all queens are placed, print the solution
        print_board(board)
        solution_count += 1
        return

    for col in range(N):
        if is_safe(board, row, col):
            # Place queen and move to the next row
            board[row] = col
            solve_n_queens(board, row + 1, N)

if __name__ == "__main__":
    N = int(input("Enter the number of queens (N): "))
    
    # Initialize the board with size N
    board = [-1] * N
    
    # Initialize the solution count
    solution_count = 0

    # Start solving the N-Queens problem
    solve_n_queens(board, 0, N)

    print("Total solutions:", solution_count)
def is_safe(board, row, col):
    for i in range(row):
        # Check if there is a queen in the same column or diagonal
        if board[i] == col or abs(board[i] - col) == abs(i - row):
            return False
    return True

def print_board(board):
    for row in board:
        print(" ".join("Q" if col == row else "0" for col in range(len(board))))
    print()

def solve_n_queens(board, row, N):
    global solution_count
    if row == N:
        # If all queens are placed, print the solution
        print_board(board)
        solution_count += 1
        return

    for col in range(N):
        if is_safe(board, row, col):
            # Place queen and move to the next row
            board[row] = col
            solve_n_queens(board, row + 1, N)

if __name__ == "__main__":
    N = int(input("Enter the number of queens (N): "))
    
    # Initialize the board with size N
    board = [-1] * N
    
    # Initialize the solution count
    solution_count = 0

    # Start solving the N-Queens problem
    solve_n_queens(board, 0, N)

    print("Total solutions:", solution_count)
