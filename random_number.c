#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,n,nguess=0;
    srand(time(0));
    num=rand()%100+1;
    printf("the number is %d \n",num);
    do
    {
        printf("Enter the number \n ");
        scanf("%d",&n);
            if(n>num){
            printf("Guess a lower number \n ");
            }
            else if (n<num)
            {
            printf("Guess a higher number \n ");
            }
            else 
            {
                printf("You guessed the number correctly \n ");
            }
            nguess++;

    }while(n!=num);
    printf("You took %d attempts \n ",nguess);
    return 0;
}