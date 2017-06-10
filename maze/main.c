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

#define SIZE    (10)

void print_maze(int maze[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%2d",maze[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    
    /* initialize maze */
    int maze[SIZE][SIZE] = {
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1, 1, 0, 0,-1, 0, 0, 0, 0,-1},
        {-1,-1,-1, 0,-1,-1,-1,-1, 0,-1},
        {-1,-1, 0, 0, 0, 0, 0,-1, 0,-1},
        {-1,-1,-1,-1, 0,-1,-1,-1, 0,-1},
        {-1,-1, 0, 0, 0,-1, 0,-1, 0,-1},
        {-1, 0, 0,-1, 0, 0, 0, 0, 0,-1},
        {-1, 0,-1,-1,-1,-1, 0,-1, 0,-1},
        {-1, 0, 0, 0, 0, 0,-1,-1, 2,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
    };

    /* print maze */
    print_maze(maze);
    
    return 0;
}