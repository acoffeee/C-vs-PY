#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(int answer) {
    int user_choice = 11;
    while (user_choice != answer) {
        printf("guess 1-10 \n");
        scanf("%d", &user_choice);
        if (user_choice != answer) {
            printf("not quite! try again\n");
        }
             else{
                continue;
            }
    }
    printf("you got it!, the answer was %d", answer);
    return user_choice;
}
int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));
    int x = rand();
    while (x >=10) {
        x = x /33;
    }
    printf("this is the answer %d\n", x);
     game(x);
    return 0;
}
