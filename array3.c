#include <stdio.h>

int main(){
    double prices[] = {5.0,10.0,15.0,20.0};

    for(int i = 0 ; i<4 ; i = i+1){
        printf("$%.1lf\n",prices[i]);
    }

    return 0 ;

}