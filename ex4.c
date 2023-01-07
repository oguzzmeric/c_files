#include<stdio.h>
int main(){
    int i ;
    int n ;
    int arr[100] ; 
    int arr2[100] ;

    printf("enter the value num") ; 
    scanf("%d",&n) ; 

    for(i = 0 ; i < n ; i++ ){
        printf("enter the %d.num --> ", i+1 );
        scanf("%d",&arr[i]) ; 
        
    }
    for(i = 0 ; i < n ; i++){
        printf("copied has done\n") ; 
        arr2[i] = arr[i] ;

    }
    for(i = 0 ; i < n ; i++ ){
        
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("--copied array--\n") ;
    for(i = 0 ; i < n  ; i++){
        printf("%d",arr2[i]); 
    }
    
    return 0  ;


}