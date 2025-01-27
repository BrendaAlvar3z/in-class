//ask user for the number of students. allocate memory to store scores (out of 100) of all students
//ask user to enter score for all students and save it to the memory.
//write scores in the memory to a file in reverse order, each score on a line. Free memory and close file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* filePointer;
    int numStudents;
    int *scores;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    scores = calloc(numStudents, sizeof(*scores));

    for (int i = 0; i < numStudents; i++) {
        int studentScore;
        printf("Enter the student score: ");
        scanf("%d", &studentScore);
        scores[i] = studentScore;
    }
    
    filePointer = fopen("ScoresFile.txt", "w");

    for (int i = numStudents - 1; i >= 0; i--) {
        putw(scores[i], filePointer);
    }

    free(scores);

    fclose(filePointer);

    return 0;
}