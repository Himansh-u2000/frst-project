#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sto_pap_sci(char you, char comp);
int main()
{
    char you, comp;                  // you--> you, comp--> computer.
    int win = 0, lose = 0;
    srand(time(0));
    int ran = rand() % 101;          // ran --> store random value from 1 to 100.

    // assign comp to choose stone, paper, scissor.
    if (ran >= 0 && ran <= 33)
    {
        comp = 's';
    }
    else if (ran > 33 && ran <= 66)
    {
        comp = 'p';
    }
    else if (ran > 66 && ran <= 100)
    {
        comp = 'c';
    }

    printf("(Stone = s, Paper = p, Scissor =c)\nEnter Stone, Paper or Scissor\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &you);
        int game = sto_pap_sci(you, comp);

        if (game == 0)
        {
            printf("computer choose %c\n", comp);
        }

        else if (game == 1)
        {
            printf("computer choose %c\n", comp);
            win++;
        }

        else if (game == -1)
        {
            printf("computer choose %c\n", comp);
            lose++;
        }
    }
    
    //check how many times you and computer win and compare it to declare winner of the game.
    if (win > lose)                 
    {
        printf("YOu WIN %d Times :-)\n",win);
    }
    else if (win < lose)
    {
        printf("YOU LOSE %d Times :-(\n",lose);
    }
    else
    {
        printf("BOTH WIN SAME Times :-|\n");
    }

    return 0;
}

/*Below function check stone, paper, scissor conditition and 
return 1-->if you win, return -->0 if no one win, return -1 if you lose. */
int sto_pap_sci(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }

    if (you == 's' && comp == 'p')
    {
        return -1;
    }
    if (you == 's' && comp == 'c')
    {
        return 1;
    }

    if (you == 'p' && comp == 'c')
    {
        return -1;
    }
    if (you == 'p' && comp == 's')
    {
        return 1;
    }

    if (you == 'c' && comp == 's')
    {
        return -1;
    }
    if (you == 'c' && comp == 'p')
    {
        return 1;
    }
}