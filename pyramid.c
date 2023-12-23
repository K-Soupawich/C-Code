#include <stdio.h>
#define MAX 9

int main(){
    int i,j,count=0;
    for (i = 1; i <= MAX; i++){
        for (j = 1; j <= MAX-i; j++)
            printf("%-4c", ' ');
        for (j = 1; j <= i; j++)
            printf("%-4d",j);
        for (j = MAX-(MAX-i+1); j >= 1; j --)
            printf("%-4d",j);

    printf("\n");
    }
}