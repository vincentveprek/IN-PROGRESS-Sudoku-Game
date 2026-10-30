#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int grid_numbers [9][9];

void intialise_0(){
    for(int row = 0; row < 9;){
        int column = 0;     
            
            for(; column < 9; column++){
                grid_numbers[row][column] = 0;
            }
        
        row = row+1;
    }  
}

void intialise_8(){
    for(int row = 0; row < 9;){
        int column = 0;
            
            for(; column < 9; column++){
                grid_numbers[row][column] = 8;
            }

        row = row+1;
        
    }  
}

void intialise_completely_correctly_filled(){
    int local_grid_numbers [9][9] = {
        {6, 7, 8, 2, 5, 4, 3, 9, 1},
        {1, 4, 5, 3, 7, 9, 6, 2, 8},
        {9, 2, 3, 8, 1, 6, 5, 4, 7},
        {3, 6, 7, 5, 9, 8, 4, 1, 2}, 
        {2, 8, 4, 1, 3, 7, 9, 6, 5},
        {5, 9, 1, 4, 6, 2, 7, 8, 3},
        {7, 5, 6, 9, 8, 1, 2, 3, 4},
        {4, 1, 9, 7, 2, 3, 8, 5, 6},
        {8, 3, 2, 6, 4, 5, 1, 7, 9}
    };

    for(int row = 0; row < 9;){
        int column = 0;     
            
            for(; column < 9; column++){
                grid_numbers[row][column] = local_grid_numbers[row][column];
            }
        
        row = row+1;
    } 

}

void intialise_randomly_filled(){
    srand(time(NULL));

    (rand() % 9) + 1;

    for(int row = 0; row < 9;){
        int column = 0;
            
            for(; column < 9; column++){
                grid_numbers[row][column] = (rand() % 9) + 1;
            }
        
        row = row+1;
        
    }  
}

void printing(){
    for(int row = 0; row < 9;){
        int column = 0;
            
            for(; column < 9; column++){
                printf("%d ", grid_numbers[row][column]);
            }

        printf("\n");
        
        row = row+1;
        
    }  
}

void check_if_filled(){
    bool grid_filled_verifier = true;
    
    for(int row = 0; row < 9;){
        int column = 0;
        
        for(; column < 9;){
            
            if (grid_numbers[row][column] == 0){
               grid_filled_verifier = false;
            }

        column = column + 1;
        }
    row = row + 1;
            
    }
    
    if (grid_filled_verifier == false){
        printf("Sudoku Grid has not been successfully filled! \n");
    }
    
    else{
        printf("Sudoku Grid has been successfully filled! \n");
    }
    
}

int main() {
    intialise_0();
    printing();
    check_if_filled();

    intialise_8();
    printing();
    check_if_filled();

    intialise_completely_correctly_filled();
    printing();
    check_if_filled();

    intialise_randomly_filled();
    printing();
    check_if_filled();
    return 0;
}
