# PUSH-SWAP

## Description
An algorithmic project where the main task is to sort data on a stack.
Using a limited amount of specific instructions, the program will look for a way to sort the data in the least amount of steps possible.

This project consists on two different programs:
- The main program, that will generate the instructions to sort the data.
- A checker, that will take as input the instructions and will check that they produce a sorted stack.

### Main program
As mentioned above, the main program will essentially sort integers. To do so, it uses 2 stacks. The first stack (`stack a`) will contain all integers in the beginning and will need to have them all sorted at the end of the program. The second one (`stack b`) will serve as kind of a "helper-stack" where the integers may be passed temporarily in order to allow the process of sorting.

The output of the program will be the instructions that makes the `stack a` sorted in ascending order. These instructions are:

```
sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
ss : sa and sb at the same time.
pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
rr : ra and rb at the same time.
rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
```

To build the program type `make` in your console. That will produce the `push_swap` binary that you can execute with a list of numbers to be sorted. Example:

```./push_swap 4 2 9 5 3 1 0```

The list of numbers must consist of numbers separated by space (don't use commas). Also, this sorting program works with no repeated numbers, so dont feed the same number or it will give you an error message.

### Checker
This other program will, as the name suggest, check that the instructions work correctly to obtain a sorted stack.

To use the `checker` binary, compile it with `make bonus`. Then execute it with a list of numbers as arguments. This list of number depicts the initial state of `stack a` (ie. the initial position of the numbers in the stack). After that, the program will read from stdin every instruction generated by the main program and tell you if they sort the stack (with an "OK" message) or not ("KO"). Example:

```
./checker 2 1 3
sa
<press CTRL-d to indicate EOL>
OK
```
Or you can also use the output of the main program and feed it directly to the checker via pipes:

```ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG```

### Visual Checker
You can use a visual checker such as [this one](https://github.com/opsec-infosec/push_swap_visualizer) to view the process of sorting.

To use it you need python3 installed on your machine.

From the github repo above:
```
You may launch the script with :
python3 pyviz.py `ruby -e "puts (-200..200).to_a.shuffle.join(' ')"`
or any other list of numbers.
```

[alt-text]()
