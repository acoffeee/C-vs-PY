#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int answer = rand(), user_choice = 11;
    while (answer >=10) {
        answer = answer /1.7;
    }
    printf("this is the answer %d\n", answer);
    while (user_choice != answer) {
        printf("guess \n");
        scanf("%d", &user_choice);
        if (user_choice != answer) {
            printf("not quite! try again\n");
        }
    }
    printf("you got it!");
    return 0;
}
