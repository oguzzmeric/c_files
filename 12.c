#include<stdio.h>

struct mystruchter {
    int mynumber;
    char myletter;
};
int main(){
    
    struct mystruchter s1;

    s1.mynumber= 12 ;
    s1.myletter = 'b';

    printf("my number -->%d\n",s1.mynumber);
    printf("my letter-->%c\n",s1.myletter);

    return 0 ;

}