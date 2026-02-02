#include <stdio.h>

int main() {
    float score, maxScore, percentage;

    printf("Enter your score: ");
    scanf("%f", &score);

    printf("Enter the maximum score: ");
    scanf("%f", &maxScore);

    percentage = (score / maxScore) * 100;

    printf("Your percentage is: %.2f%%\n", percentage);

    return 0;
}