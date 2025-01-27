//calculate the percentage of a user's score in relation to the maximum score in a game

#include <stdio.h>

int main() 
{
    double maximumScore;
    double userScore;

    printf("Enter the maximum score: ");
    scanf("%lf", &maximumScore);
    printf("Enter the user score: ");
    scanf("%lf",&userScore);

    printf("The percentage of the user score is %.2lf%%\n", (userScore/maximumScore) * 100);
    return 0;
}