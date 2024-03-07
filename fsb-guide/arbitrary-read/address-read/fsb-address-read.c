#include <stdio.h>
#include <stdlib.h>

char flag[100];

void read_flag() {
    FILE *file;
    file = fopen("flag.txt", "r");
    fgets(flag, 100, file);
    fclose(file);
}

int main() {
    char buffer[100];
    read_flag();
    printf("Flag is stored at: %p\n", flag);
    printf("Who are you? ");
    scanf("%100s", buffer);
    printf(buffer);
}
