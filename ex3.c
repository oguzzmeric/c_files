int main(){
    int num[3];
    int i ;
    int sum = 0 ;

    for(i = 0 ; i <= 2 ; i++){
        printf("enter the num %d -->", i );
        scanf("%li",&num[i]);
    }
    printf("\n");
    
    for(i = 0  ; i <= 2 ; i++ ){
        sum = sum + num[i];
        printf("\n");


    }
    printf("%d",sum);

    return 0 ;
    


}