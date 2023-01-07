#include<stdio.h>
int main()
{
    int mynum[] = {25,50,75,100};
    mynum[0] = 33;//there we deleted the 25 after we add 33
    printf("%d-->\n",mynum[2]);
    printf("%d-->\n",mynum[0]);
    
    return 0 ;

}