

#include <stdio.h>

int main()
{
    int regno;
    char str[50];
    char brc[50];
    fgets(str, sizeof(str), stdin);
    
    scanf("%d\n", &regno);
    fgets(brc, sizeof(brc), stdin);
    printf("NAME-");
    printf("%s", str);
    printf("REG NO-");
    printf("%d\n", regno);
    printf("BRANCH-");
    printf("%s", brc);

    printf("MY HOBBIES ARE TO PLAY CRICKET AND SOLVE SOME INTRESTING DSA QUESTION ");

    return 0;
}
