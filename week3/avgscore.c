#include <stdio.h>

int main()
{
    float score;
    float average;
    int i = 1;
    while (i <= 10)
    {
        scanf("%f", &score);
        if (i == 1)
        {
            average = score;
        }
        else
        {
            average = (average * (i - 1) + score) / i;
        }

        printf("Average score is %.2f\n", average);
        i += 1;
    }
    return 0;
}