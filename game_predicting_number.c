#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
int number, guess,nguess=1;
srand(time(0));//generates a number between 1 to 100
number= rand()%100+1 ;
//printf("the number is %d",number);
do{
    printf("guess a number between 1 t0 100\n ") ;
    scanf("%d",&guess);
    if(guess>number){
        printf("You have guessed a higher number\n,down the number please\n");
    }
    else if(guess<number){
        printf("You have guessed a lower number\n,high the number pleas\ne");
    }
    else{
        printf("you guessed the number in %d attempt\n", nguess);
}
nguess++;
}while(guess!= number);

return 0;
    
}
