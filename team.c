#include <stdio.h>
int main (){
    int score;
    printf ("Enter the team's score :");
    scanf ("%d",&score);
    if (score >=12){
        printf("The team has qualified for the next stage.\n");
    }
        else {
            printf ("The team has NOT qualified for the next stage.\n");
        }
    return 0;
}