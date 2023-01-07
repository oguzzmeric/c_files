#include<stdio.h>
#include<math.h>


struct mystructere{
    int mynumber;
    char myletter;

};

int main()
{
    struct mystructere s1 ;
    struct mystructere s2 ;

    s1.mynumber = 13;
    s1.myletter = 'b';

    s2.myletter = 'e';
    s2.mynumber = 11;

    printf("my 1. fav number is -->%d\n",s1.mynumber);
    printf("my 2.fav number is -->%d\n",s2.mynumber);

    printf("my fav letter is -->%c\n",s1.myletter);
    printf("my fav 2. letter is -->%c\n",s2.myletter);

    return 0 ;

}
