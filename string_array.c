#include<stdio.h>
#include<string.h>

int main(){

    char cars[][10]  = {"allah" , "kitap" , "din", "muhammet"} ;

    strcpy(cars[0],"oguz");
    printf("%d\n",sizeof(cars));
    printf("%d\n",sizeof(cars[0]));
    printf("%d\n",sizeof(cars[4]));

    for(int i = 0 ; i < 4 ;i = i + 1 ){
        printf("\t%s\n",cars[i]);
    }

    for(int i = 0 ; i < sizeof(cars)/sizeof(cars[0]); i = i + 1){
        printf("%s\n",cars[i]);

    }



    return 0 ;

}