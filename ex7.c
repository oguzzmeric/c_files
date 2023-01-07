#include<stdio.h>
int main(){
    int arr1[100] ; 
    int arr2[100] ; 
    int arr3[100] ;
    int s1 ;
    int s2 ;
     
    int i ;
    int j ;

    printf("enter the first array size =>>") ; 
    scanf("%d",&s1);
    for(i = 0  ; i < s1 ; i++ ){
        printf("enter the %d. array", i+1);
        scanf("%d",&arr1[i]);

    }

    printf("enter the second array size =>>") ; 
    scanf("%d",&s2);

    for(i = 0  ; i < s2 ; i++ ){
        printf("enter the %d. array", i+1);
        scanf("%d",&arr2[i]);
        
        }





    for(i = 0 ; i < s1 ; i++ ){
        printf("%d",arr1[i]);
    }
    printf("\n");

    for(i = 0 ; i < s2 ; i++ ){
        printf("%d",arr2[i]);
    }

    printf("\n");

    //thirth array
    for(i = 0 ; i <s1 ; i++ ){
        arr3[i] = arr1[i] ; 

    }



    
    j = s2 ;
    for(i = 0 ; i < s2  ; i++ ){
        
        arr3[j]  = arr2[i] ;
        j++ ;  
    }





    for(i = 0 ; i < s1+s2 ; i++){
        printf("%d",arr3[i]);
    }





    return 0 ;
}