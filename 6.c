#include<stdio.h>
int myfunction(float x,float y){
    return x+y;
}
void myFunction2(char name[]) {
  printf("Hello %s\n this worked", name);
}

int main()
{
    printf("result is--->%d\n",myfunction(3,4));
    myFunction2("oguz");
    

    return 0 ;

}