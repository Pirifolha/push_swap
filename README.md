*This project has been created as part of the 42 curriculum by misousa.*

# Push_Swap

## Description

**push_swap** is a 42 School project whose goal is to sort a sequence of integers using two stacks (`a` and `b`) and a limited set of allowed operations.

The program receives a list of integers as arguments and must output the smallest possible sequence of instructions required to sort the numbers in ascending order in stack `a`.

Main objectives of the project:

- Implement and manipulate data structures (stacks using linked lists).
- Develop an efficient sorting algorithm.
- Work on optimization and algorithmic complexity.
- Ensure proper memory management (no leaks).
- Implement robust parsing and error handling.

The project was developed in **C**, following the 42 coding standards.

---

## Available Operations

The allowed operations are:

- `sa` – swap the first two elements of stack a  
- `sb` – swap the first two elements of stack b  
- `ss` – perform `sa` and `sb` simultaneously  
- `pa` – push the top element from stack b to stack a  
- `pb` – push the top element from stack a to stack b  
- `ra` – rotate stack a  
- `rb` – rotate stack b  
- `rr` – perform `ra` and `rb` simultaneously  
- `rra` – reverse rotate stack a  
- `rrb` – reverse rotate stack b  
- `rrr` – perform `rra` and `rrb` simultaneously  

---

## Instructions

### Compilation

The project includes a `Makefile` with the following commands:

```bash
make        # compile the project
make all    # compile the project
make clean  # remove object files
make fclean # remove object files and executable
make re     # recompile everything
```

The generated executable is:

```bash
./push_swap
```

The project uses:

- **libft**
- **ft_printf**

---

## Usage

The program takes integers as arguments:

```bash
./push_swap 2 1 3 6 5 8
```

Simple example:

```bash
./push_swap 3 2 1
```

Possible output:

```
sa
rra
```

Another example:

```bash
./push_swap 5 1 4 2 3
```

Possible output:

```
pb
pb
sa
pa
pa
ra
ra
```

The output corresponds to the sequence of operations required to sort the numbers.

---

## Algorithm Strategy

The strategy depends on the input size:

- Small sets (2–5 numbers) → optimized hardcoded sorting logic.
- Larger sets → indexing combined with a binary Radix Sort algorithm.

Indexing is used to convert original values into sorted positions, allowing Radix Sort to be applied efficiently and improving overall performance.

---

## Error Handling

The program handles the following errors:

- Non-numeric arguments
- Duplicate values
- Integer overflow / underflow
- Invalid input format

In case of error, the program outputs:

```
Error
```

---

## Resources

References used during development:

- Official C language documentation
- Man pages (`man malloc`, `man free`, etc.)
- Documentation on stack data structures and linked lists
- Articles and documentation about the Radix Sort algorithm
- Official 42 project subject

### AI Usage

Artificial intelligence (ChatGPT) was used for:

- Structuring and writing the README file.
- Serving as an auxiliary testing and validation tool.
- Clarifying conceptual questions during development.

All core logic and implementation were developed manually.

---
