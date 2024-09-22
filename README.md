# Push_swap

## Project Overview

The **Push_swap** project is a sorting algorithm challenge that requires sorting data on a stack using a limited set of operations and achieving the smallest number of moves. The goal is to manipulate two stacks, **a** and **b**, using specific operations to sort a list of integers provided as input.

## How It Works

- You start with two stacks:
  - **Stack a**: Contains a set of random integers.
  - **Stack b**: Starts empty.
  
- The goal is to sort all integers in **stack a** in ascending order using the fewest number of operations.

### Available Operations:
- `sa` / `sb`: Swap the first two elements of stack a or b.
- `ss`: Perform both `sa` and `sb`.
- `pa` / `pb`: Push the top element of stack b to a, or vice versa.
- `ra` / `rb`: Rotate stack a or b (shift up all elements).
- `rr`: Perform both `ra` and `rb`.
- `rra` / `rrb`: Reverse rotate stack a or b (shift down all elements).
- `rrr`: Perform both `rra` and `rrb`.

### Example:
```bash
./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```
This example sorts the integers with 8 operations.

## Mandatory Part

- The program **push_swap** takes a list of integers as arguments, with the first argument being at the top of **stack a**.
- It outputs the smallest list of instructions to sort the stack.
- If no parameters are given, the program does nothing.
- The program will display `Error` if there are invalid inputs (non-integer, duplicates, etc.).

### Functions Allowed:
- `read`, `write`, `malloc`, `free`, `exit`
- `ft_printf` (or an equivalent custom printf).

### Error Handling:
- Handle invalid input such as non-integers, numbers exceeding integer limits, or duplicates.

## Bonus Part

- Implement a **checker** program that verifies if a list of instructions sorts **stack a** correctly.
- **Checker** reads a list of instructions and checks if after applying them, **stack a** is sorted and **stack b** is empty.
- **Checker** will output `OK` if the list is valid and `KO` if not.

## Compilation

To compile the project, run:
```bash
make
```

This will generate the executable `push_swap`.

### Running Push_swap:
```bash
./push_swap [list of integers]
```

### Example:
```bash
./push_swap 4 67 3 87 23
```

## Conclusion

This project provided valuable insights into algorithm optimization, stack operations, and handling constraints. The challenge was to ensure the program sorts integers using the fewest possible moves.

--- 

This README covers the basics of the project while keeping it concise and easy to follow.