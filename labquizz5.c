#include <stdio.h>

int main()
{
    int signal;

    printf("Enter signal number: ");
    scanf("%d", &signal);

    switch(signal)
    {
        case 1:
            printf("Stop");
            break;

        case 2:
            printf("Ready");
            break;

        case 3:
            printf("Go");
            break;

        default:
            printf("Invalid Signal");
    }

    return 0;
}