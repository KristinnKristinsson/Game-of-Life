# Game-of-Life
 The game of life in C

 What shall be done:
 1. Game of life simulation
 2. Create patterns
 
 What does that entail:
 The simulation will be done on a 128x128 square that will follow the rules of John Horton Conways Game of Life simulation
 that was first created in 1970 (wiki).

 The rules are as follows:
1. Any live cell with fewer than two live neighbors dies, as if by underpopulation.
2. Any live cell with two or three live neighbors lives on to the next generation.
3. Any live cell with more than three live neighbors dies, as if by overpopulation.
4. Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

First we must make a Grid
- We need to specify the area
- We need to clarify what happens when we reach the outer bounds

We must simulate the status of the cells
- create a struct(?) or typedef(?) for a cell
- define a living cell, give it a special char
- define a dead cell, give it a special char

Create the rules:
- if statements to describe the interactions of the cells.

Game loop:
- everything must be wrapped in a loop that will go through predefined amount of iterations before exiting.

Seed:
- Must be able to initialize a seed.
    - random pattern
    - specific patterns (needs research)

Specific gains for coding this is in C:
- addresses and pointers should be used to keep track of the cells within the grid.
- bit procedures can perhaps be of use if a pattern emerges that can be used.

specific problems with coding in C:
- memory leakage and control
- memory allocation
- heap, do we need one or can we do without?
- garbage collection not included Which will be hard to do if we want to pass on from one iteration to the next.


