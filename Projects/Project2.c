/*                                  Snkae, Water, Gun
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose snake/water or gun.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    printf("WELCOME TO SNAKE, WATER AND GUN GAME\n");

    char input[10];
    int random_number;
    // random_number = 0 => Snake
    // random_number = 1 => Water
    // random_number = 2 => Gun

    while (1) {
        
        srand(time(0));
        random_number = rand() % 3;

        printf("Enter snake, water or gun: ");
        scanf("%s", &input);
        char ch = input[0];        
        
        if(random_number == 0) {
            printf("You: %s, Computer: Snake\n", input);
            if (ch == 's')
                printf("Oops!, RETRY.");
            else if (ch == 'w') {
                printf("Sorry!, Snake drinks the water and you LOOSE.\n");
                break;
            }
            else {
                printf("Congrats!, Gun kills the snake and you WON.\n");
                break;
            }
        }
        else if(random_number == 1) {
            printf("You: %s, Computer: Water\n", input);
            if (ch == 'w')
                printf("Oops!, RETRY.");
            else if (ch == 's') {
                printf("Sorry!, Snake drinks the water and you WON.\n");
                break;
            }
            else {
                printf("Sorry!, Water damaged the gun and you LOOSE.\n");
                break;
            }
        } 
        else if (random_number == 2){
            printf("You: %s, Computer: Gun\n", input);
            if (ch == 'g')
                printf("Oops!, RETRY.");
            else if (ch == 's') {
                printf("Sorry!, Gun killed the snake and you LOOSE.\n");
                break;
            }
            else {
                printf("Congrats!, Water damaged the gun and you WON.\n");
                break;
            }
        }
        else
            printf("Something went wrong!, RETRY.");
    }

    printf("The END\n");

    return 0;
}