#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//project_1
int main()
{
    int ran,guess,flag=0,i=0;           //ran--> store random value, guess--> store guessed number in guess.
    srand(time(0));                     
    ran=rand()%101;                 //ran --> store random value from 1 to 100.
    
    printf("Guess the Correct number b/w 1-100\n");

    do                  //used do loop to execute atleast 1 time.
    {   
         ++flag;                //store number of attempts in flag variable
         scanf("%d", &guess);
   
        if(guess<ran)           //if guessed number is greater than random number than this condtion will 
        {
           printf("Guess Higher Number\n*****************************\n"); 
        }

        else if(guess>ran)          //if guessed number is lower than random number than this condtion will
        {
            printf("Guess Lower Number\n*****************************\n");
        }

        else            //This condition will run when our guessed number is equal to random number.
        {
            printf("Your Guess is Correct  :-)\n");
            printf("You attempted %d times\n",flag);
            printf("*************************\n");
            i=2;
        }
    }
    while (i!=2);
    
    
    return 0;
}