grid_numbers: int = [[None for c in range(9)] for r in range(9)]

def intialise_0():
    row: int = 0
    while row < 9:
        column: int = 0
        while column < 9:
            grid_numbers[row][column] = 0
            column = column + 1
        row: int = row + 1

def intialise_8():
    row: int = 0
    while row < 9:
        column: int = 0
        while column < 9:
            grid_numbers[row][column] = 8
            column = column + 1
        row: int = row + 1

def intialise_completely_correctly_filled():
    global grid_numbers
    grid_numbers = [
        [6, 7, 8, 2, 5, 4, 3, 9, 1],
        [1, 4, 5, 3, 7, 9, 6, 2, 9],
        [9, 2, 3, 8, 1, 6, 5, 4, 7],
        [3, 6, 7, 5, 9, 8, 4, 1, 2], 
        [2, 8, 4, 1, 3, 7, 9, 6, 5],
        [5, 9, 1, 4, 6, 2, 7, 8, 3],
        [7, 5, 6, 9, 8, 1, 2, 3, 4],
        [4, 1, 9, 7, 2, 3, 8, 5, 6],
        [8, 3, 2, 6, 4, 5, 1, 7, 9]
    ]

def intialise_randomly_filled():
    import random
    row: int = 0
    while row < 9:
        column: int = 0
        while column < 9:
            grid_numbers[row][column] = random.randrange(1,10)
            column: int = column + 1
        row: int = row + 1

def printing():
    row: int = 0
    while row < 9:
        column: int = 0
        while column < 9:
            print(grid_numbers[row][column], end=" ")
            column: int = column + 1
        print()
        row: int = row + 1

def check_if_filled():
    grid_filled_verifier: bool = True

    row: int = 0
    while row < 9:
        column: int = 0
        while column < 9:

            if grid_numbers[row][column] == 0:
                grid_filled_verifier = False

            column = column + 1
        row = row + 1

    if grid_filled_verifier == False:
        print("Sudoku Grid has not been successfully filled!")

    else:
        print("Sudoku Grid has been successfully filled!")

intialise_0()
printing()
check_if_filled()

intialise_8()
printing()
check_if_filled()

intialise_completely_correctly_filled()
printing()
check_if_filled()

intialise_randomly_filled()
printing()
check_if_filled()
