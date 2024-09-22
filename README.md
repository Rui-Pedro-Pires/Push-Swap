# Push_swap

## Description
**Push_swap** is a project where I developed a sorting algorithm for a stack of integers using a limited set of operations. The challenge was to sort the stack in ascending order while minimizing the number of moves. This project introduced me to algorithmic complexity and how different sorting methods perform based on the input configuration.

In this project, I improved my understanding of sorting algorithms, stack data structures, and optimized problem-solving in C.

## Features
- Two stacks (`a` and `b`) where `a` initially holds a list of integers and `b` is empty.
- Operations available:
  - `sa` (swap a): Swaps the first two elements of stack `a`.
  - `sb` (swap b): Swaps the first two elements of stack `b`.
  - `ss`: Performs `sa` and `sb` simultaneously.
  - `pa` (push a): Pushes the top element of `b` to `a`.
  - `pb` (push b): Pushes the top element of `a` to `b`.
  - `ra` (rotate a): Shifts all elements of `a` up by 1.
  - `rb` (rotate b): Shifts all elements of `b` up by 1.
  - `rr`: Performs `ra` and `rb` simultaneously.
  - `rra` (reverse rotate a): Shifts all elements of `a` down by 1.
  - `rrb` (reverse rotate b): Shifts all elements of `b` down by 1.
  - `rrr`: Performs `rra` and `rrb` simultaneously.
- The program calculates the minimal sequence of operations required to sort `a` in ascending order.

### Example
Here’s an example of how some of the operations work:
1. Start with stack `a` containing: 2, 1, 3, 6, 5, 8.
2. Perform `sa` to swap the first two elements of `a`: 
   - Result: 1, 2, 3, 6, 5, 8.
3. Perform `pb` three times to move the first three elements from `a` to `b`.
4. Perform `ra` and `rb` (equivalent to `rr`) to rotate both stacks up by one.

By following such operations, the program minimizes the steps required to sort the numbers.

## Bonus Features
I also implemented the following bonus:
- Created a `checker` program that verifies if the list of operations actually sorts the stack properly.

## Installation
1. Clone my repository:
   ```bash
   git clone git@github.com:Rui-Pedro-Pires/42Push_Swap.git
   ```
2. Navigate to the project directory:
   ```bash
   cd push_swap
   ```
3. Compile the project with the provided `Makefile`:
   ```bash
   make
   ```

## Usage
To sort a stack:
```bash
./push_swap 2 1 3 6 5 8
```

This will output the list of instructions to sort the stack.

### Benchmark
- For 100 random numbers, the program must sort in fewer than 700 operations for a minimal grade.
- For 500 random numbers, the program must sort in fewer than 5500 operations to achieve a perfect score.

## Requirements
- C programming language.
- Understanding of stack operations and sorting algorithms.

## External Functions
The project uses the following external functions:
- `read`, `write`, `malloc`, `free`, `exit`.

## License
This project is licensed under the MIT License.
