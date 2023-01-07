#include<stdio.h>
int main()
{
    int i ;
    for(i=0;i<10;i = i + 1){
        if(i==4){
            break;
        }
        printf("this is-->%d\n",i);
    }
    return 0 ;


}
// this is for loop and if/else command using each other