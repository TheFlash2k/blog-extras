#include <stdio.h>
#include <stdlib.h>

int main() {
    const char* name = "Ashfaq Nadeem\0";
    int age = 22;
    printf("My name is %s and I'm %d years old!\n", name, age);
}
