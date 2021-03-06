//
//  main.c
//  maze
//
//  Created by SeongCheol Park on 2017. 6. 10..
//  Copyright © 2017년 SeongCheol Park. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct position{
    int x;
    int y;
}Position;

void print_maze(int** maze, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%2d",maze[i][j]);
        }
        printf("\n");
    }
}

void initialize_maze(int*** maze, int row, int col){
    (*maze) = (int**)malloc(sizeof(int*)*row);
    for(int i=0;i<col;i++){
        (*maze)[i] = (int*)malloc(sizeof(int)*col);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            (*maze)[i][j] = rand()%2;
        }
    }
}

void find_path(int** maze, int row, int col){
    printf("Program find the path\n");
}

void input_data(int *row, int *col){
    printf("Please input row number :");
    scanf("%d",row);
    printf("Please input col number :");
    scanf("%d",col);
}

void free_maze(int** maze, int row){
    printf("Program free maze memory\n");
    for(int i=0;i<row;i++){
        free(maze[i]);
    }
    free(maze);
    printf("End free\n");
}

void find_start_position(int** maze, Position *start, int col){
    int i;
    for(i=0;i<col;i++){
        if(maze[0][i]== 1){
            start->x = 0;
            start->y = i;
            printf("start position : [%d, %d]\n",start->x, start->y);
            return;
        }
    }
    if(i==col){
        printf("there is no start position\n");
        return;
    }
}

void find_end_position(int **maze, int col){
    int i;
    for(int i=0;i<col;i++){
        
    }
}

int main(void) {
    /* show what this program is */
    printf("*** finding path of maze ***\n");
    
    /* declare random function and variable */
    srand((unsigned)time(NULL));
    int row = 0, col = 0;
    int **maze;
    Position start;
    
    /* input row and column number */
    input_data(&row, &col);
    
    /* initialize(make) maze */
    initialize_maze(&maze, row, col);
    
    /* print maze */
    print_maze(maze, row, col);
    
    /* find start position */
    find_start_position(maze, &start, col);
    
    /* find path */
    find_path(maze, row, col);
    
    /* free maze */
    free_maze(maze, row);
    
    return 0;
}
