#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main () {
    int number , guess , attempts =1 ;
    srand(time(0));
    number= rand()%100 +1; 
    printf( " I am choosing a number between 1 to 100 ,you have to guess that number ,\n I will tell you to enter greater or smaller ,\n and process go on untill you guessed it , lets know how many attempt will you use .\n\n");

        printf("Guess the number between 1 to 100\n");
    do{
        scanf("%d" , &guess);
        if (guess> number)
        {
            printf("Give smaller number please!. Enter again.\n");
            
        }
        else if(guess< number)
        {
            printf("Give larger number please!. Enter again.\n");
          
        }
        else
        {
            printf("You guessed the number in %d attempts.\n " , attempts);
            break;
        }
        attempts++;
        
        }
        while ( guess *= number);
        
    {
    printf("The number is %d\n" , number);
    printf("Enter zero to exit game\n");
    scanf("%d" , 0);
    
    }
    

    return 0 ;
}