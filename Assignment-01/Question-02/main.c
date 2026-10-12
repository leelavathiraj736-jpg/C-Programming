#include <stdio.h>

int main() {
    int questions, time, submitted;
    printf("submitted questions:");
    scanf("%d", &questions);
    printf("time:");
    scanf("%d",&time);
    printf("submitted:");
    scanf("%d",&submitted);
    if (questions >= 1 && time > 0 && submitted == 0) 
        printf("Submission Allowed");
    else 
        printf("Submission Not Allowed");
    return 0;
}
