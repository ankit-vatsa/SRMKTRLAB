.data
num1: .word 10
num2: .word 5

.text
main:
    lw $a0, num1   # Load num1 into $a0
    lw $a1, num2   # Load num2 into $a1
    add $a0, $a0, $a1  # Add num1 and num2
    li $v0, 1      # Set syscall code for print_int
    syscall        # Print the result

    li $v0, 10     # Set syscall code for exit
    syscall        # Exit the program
