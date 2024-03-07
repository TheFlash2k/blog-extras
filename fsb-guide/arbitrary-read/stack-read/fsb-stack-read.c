// gcc -o fsb-stack-read fsb-stack-read.c -w

#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[0x100];
    char admin_pwd[0x20] = { "AAAAAAAABBBBBBBBCCCCCCCCDDDDDDDD" };

    printf("What is your name? ");
    scanf("%255s", buffer);

    printf("Welcome ");
    printf(buffer);

    printf("Do you know what the admin password is? ");
    scanf("%255s", buffer);

    if(strcmp(admin_pwd, buffer) == 0) {
        printf("You have successfully passed this test...");
        return 0;
    }

    printf("Well, %s; you failed!", buffer);
    return 1;
}
