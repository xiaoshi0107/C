#include <stdio.h>

int main()
{
    int type;
    scanf("%d", &type);
    switch (type)
    {
    case 1:
        printf("hello");
        break;
    case 2:
        printf("word");
        break;
    default:
        printf("!");
        break;
    }
    return 0;
}