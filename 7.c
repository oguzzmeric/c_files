#include<stdio.h>

void myfunc(char name[]){
    printf("hello %s",name);

}
int myfunction(float a, float b){
    printf("%f",a+b);
}

int main(){

    myfunc("oguz\n");

    myfunction(3,7);


    return 0 ;
    }