## push-swap
A 42 project about sorting algorithms.

_This project has been created as part of the 42 curriculum by mtakiyos_

## Description
Push_swap is a sorting algorithm project that challenges you to sort a stack of integers using a limited set of operations; the goal is to have the minimum number of moves necessary to sort the stack.

The project consists of two stacks (A and B) and a set of operations:

**Swap operations**: `sa` `sb` `ss`

sa (swap a): Swap the first 2 elements at the top of the stack a. Does nothing if there is only one or none. 

sb (swap b) : Swap the first 2 elements at the top of the stack b. Does nothing if there is only one or none. 

ss : sa and sb at the same time. 

**Push operations**: `pa` `pb`

pa (push a): Takes the first element on top of b and puts it on a. Does nothing if b is empty. 

pb (push b): Takes the first element on top of a and puts it on b. Does nothing if a is empty. 

**Rotate operations**: `ra` `rb` `rr`

ra (rotate a): Shifts all the elements of the stack a up by one position. The first element becomes the last. 

rb (rotate b) : Shifts all the elements of the stack b one position upwards. The first element becomes the last one. 

rr : ra and rb at the same time. 

**Reverse rotate operations**: `rra` `rrb` `rrr`

rra (reverse rotate a): Shifts all elements of the stack down one position. the stack a. The last element becomes the first. 

rrb (reverse rotate b): Shifts all the elements of the stack b one position downwards. the stack b. The last element becomes the first. 

rrr : rra and rrb at the same time.

**Implementation:**
- **Simple Sort**: For 2-5 elements, uses optimized manual algorithms
- **Radix Sort**: For 6+ elements, uses bit by bit sorting with normalization

## Instruction 

### Compilation
```bash
make && ./push_swap <numbers>
```
Example:
```bash
./push_swap 3 2 1 5 4

./push_swap "3 2 1 5 4" 
```
## Resources
- https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
- https://42-cursus.gitbook.io/guide/2-rank-02/push_swap
- https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e