#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char a[100];
    float sum=0,count=0,avg;
    scanf("%s",a);
    while (strcmp(a,"exit") != 0){
        count += 1;
        float b = atoi(a);
        sum += b;
        scanf("%s",a);
        }
    avg = sum/count;
    if (count == 0){
        printf("none");
    }else{
        printf("%.2f",avg);
    }
}