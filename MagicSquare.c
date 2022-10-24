#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int checkSquare(int square[3][3]);

int main(){
    int clear = 0;
    int done = 0;
    int count = 0;
    time_t t;
    srand((unsigned) time(&t));
    //Preset an array
    int preset[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
    //Check if Magic Square
    if(checkSquare(preset) == 1){
        printf("It is a magic square!\n");
    }
    else{
        printf("It is NOT a magic square!\n");
    }

    //Create a random 2d Array with numbers 1-9

    while (done == 0){
        count++;
        int first = rand() % 10;
        int sec;
        int third;
        int fourth;
        int fifth;
        int sixth;
        int seventh;
        int eight;
        int ninth;

        while (clear == 0){
            sec = rand() % 10;
            if (sec != first){
                clear = 1;
            }
        }

        clear = 0;

        while (clear == 0){
            third = rand() % 10;
            if (third != first && third != sec){
                clear = 1;
            }
        }
    
        clear = 0;

        while (clear == 0){
            fourth = rand() % 10;
            if (fourth != first && fourth != sec && fourth != third){
                clear = 1;
            }
        }
    
        clear = 0;

        while (clear == 0){
            fifth = rand() % 10;
            if (fifth != first && fifth != sec && fifth != third && fifth != fourth){
                clear = 1;
            }
        }
    
        clear = 0;

        while (clear == 0){
            sixth = rand() % 10;
            if (sixth != first && sixth != sec && sixth != third && sixth != fourth && sixth != fifth){
                clear = 1;
            }
        }
    
        clear = 0;

        while (clear == 0){
            seventh = rand() % 10;
            if (seventh != first && seventh != sec && seventh != third && seventh != fourth && seventh != fifth && seventh != sixth){
                clear = 1;
            }
        }
    
        clear = 0;

        while (clear == 0){
            eight = rand() % 10;
            if (eight != first && eight != sec && eight != third && eight != fourth && eight != fifth && eight != sixth && eight != seventh){
                clear = 1;
            }
        }
    
        clear = 0;

        while (clear == 0){
            ninth = rand() % 10;
            if (ninth != first && ninth != sec && ninth != third && ninth != fourth && ninth != fifth && ninth != sixth && ninth != seventh && ninth != eight){
                clear = 1;
            }
        }
    
        clear = 0;

        int randsquare[3][3] = {{first, sec, third}, {fourth, fifth, sixth}, {seventh, eight, ninth}};

        //check if magic square
        if(checkSquare(randsquare) == 1){
            printf("Total square generated:%d\n", count);
            printf("The random Magic Square:\n");
            printf("[%d %d %d]\n", randsquare[0][0], randsquare[0][1], randsquare[0][2]);
            printf("[%d %d %d]\n", randsquare[1][0], randsquare[1][1], randsquare[1][2]);
            printf("[%d %d %d]\n", randsquare[2][0], randsquare[2][1], randsquare[2][2]);
            done = 1;
        }
        //done = 1;
    }

    return 0;
}

//Define Function that checks if 2d array is a magic square
int checkSquare(int square[3][3]){
    int temp = 0;
    int yes = 1;
    int diag1 = square[0][0] + square[1][1] + square[2][2];
    int diag2 = square[1][1] + square[0][2] + square[2][0];

    //check horizontally
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            temp += square[i][j];
        }
        if(temp != 15){
            yes = 0;
        }
        temp = 0;
    }
    //check vertically
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            temp += square[j][i];
        }
        if(temp != 15){
            yes = 0;
        }
        temp = 0;
    }

    // check diagonally
    if(diag1 != 15){
        yes = 0;
    }

    //check diag2
    if (diag2 != 15){
        yes = 0;
    }
/*
    if (yes == 1){
        printf("It is a magic square!");
    }
    else{
        printf("It is NOT a magic square!");
    }
*/
    return yes;
}

