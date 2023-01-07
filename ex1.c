#include<stdio.h>
int main(){
    int numbers[10];
    int i = 0 ;

    printf("enter the 10 elements in numbers");
    for(i=0 ; i<11 ; i++){
        printf("enter the element-->%d - \n",i);
        scanf("%li", &numbers[i]);
    }

    for(i = 0 ; i < 11 ; i++){
    printf("%d\n",numbers[i]);
    }
    return 0 ;

}