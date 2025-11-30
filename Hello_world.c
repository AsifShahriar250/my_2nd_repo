#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char target[] = "Hello World";
    char guessed[30] = "";

    srand(time(0));

    for (int i = 0; target[i] != '\0'; i++)
    {
        do
        {
            guessed[i] = (char)( rand() % (122 - 32 + 1) + 32);
            guessed[i + 1] = '\0';
            printf("\r%s", guessed);
            fflush(stdout);
            usleep(50000);
        } while (guessed[i] != target[i]);
    }

    printf("\nDone!\n");
    return 0;
}
