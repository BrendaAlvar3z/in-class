#include <stdio.h>

// void myFunction(char name[], int age) {
//     printf("hello %s. You are %d years old.\n", name, age);
// }

// int main() {
//     myFunction("Liam", 3);
//     myFunction("Jenny", 14);
//     myFunction("Anja", 30);

//     return 0;
// }

int x = 5;

void myFunction(){
    int x = 22;
    printf("%d\n", x);
}

int main() {
    myFunction();

    printf("%d\n", x);
    return 0;
}