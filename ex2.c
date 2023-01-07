int main(){
    int num[3];
    int i ; 
    for(i=0 ; i<3 ; i++){
        printf("enter the element-->%d - \n",i);
        scanf("%li", &num[i]);
    }
    printf("\n");
    for(i = 0 ; i <= 2 ; i++){
        printf("%li",num[i]);
    }
    printf("\n");
    for(i = 2 ; 0 <= i ; --i ){
        printf("%li",num[i]);
    }


return 0 ;

}