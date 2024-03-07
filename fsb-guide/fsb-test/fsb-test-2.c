#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[0x100];
    printf("Enter your name: ");
    scanf("%250s", buffer);
    printf(buffer);
}
