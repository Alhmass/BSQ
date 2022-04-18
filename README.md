
# BSQ

Epitech first year project.

C program that finds the biggest square in a map using dynamic programming.

## Subject

You must find the largest possible square on a board while avoiding obstacles.

The board is represented by a file passed as the program’s argument. 
The file is valid if it is respecting those
constraints:
- its first line contains the number of lines on the board (and only that),
- “.” (representing an empty place) and “o” (representing an obstacle) are the only two characters for the other lines,
- all of the lines are of the same length (except the first one),
- it contains at least one line,
- each line is terminated by ‘\n’.
You program must print the board, with some “.” replaced by “x” to represent the largest square you found.

## Map

You can find map to test the project in the tests/mouli_maps folder.
## Usage

### Build
```sh
make
```

### Run
```sh
./bsq path_of_the_map
```

### Run unit tests
```sh
make tests_run
```

