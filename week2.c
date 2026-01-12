#include <stdio.h>

struct Student{
    int age;
    char full_name[30]; // can only contain 29 elements kasi full_name[29] = '\0' or null byte 
    //so declare full_name[29] = '\0';
    char prog_short[10]; //only contaiin 9 elements 
};

int main(){

    int tp[5] = {23, 34, 54, 12, 54};
    int lw[9];

    for(int i = 0; i < sizeof(lw); i++){
        scanf("%d", &lw[i]);
    }

    int *lol = &tp[4];
    printf("Prints the actual value: %d\n", *(lol + 4));
    int lol2 = &tp[4];
    printf("Prints the memory address: %p\n", lol2);

    

    return 0;
}