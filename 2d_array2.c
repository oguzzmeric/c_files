#include<stdio.h>
int main(){
    int numbers[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int columns = 3;
    
    for(int i = 0 ; i < rows ;i = i+1 ){

        for(int j = 0 ; j < columns ;j = j + 1 ){
            printf("%d",numbers[i][j]);
        }
        printf("\n");
    }

    return 0 ;
    

}