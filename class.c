#include <stdio.h>
int main(void){
    char num;
    scanf("%d" , & num);
    if (num >= 65 && num <= 90){
        printf("uppercase %d", num);
    } else {
        printf("lowercase %d", num);
    }  
}