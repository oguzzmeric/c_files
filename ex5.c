#include<stdio.h>
int main(){
    int i ; 
    int n ;
    int c ;  
    int arr[100];  

    printf("enter the value num") ; 
    scanf("%d",&n) ; 


    for(i = 0 ; i < n ; i++ ){
        printf("enter the %d.num --> ", i+1 );
        scanf("%d",&arr[i]) ; 
        
    }
    
    printf("enter the choosen index-->") ;
    scanf("%d",&c) ; 
    printf("%d",arr[c]) ;
    
    return 0 ; 



}
