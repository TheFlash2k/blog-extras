#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int secret = 0;

int main() {

	// Generating a random 2-byte number everytime
	srand(time(NULL));
	long random = rand() % (1 << 16);

	char buffer[0x100] = { 0 };

	printf("How can I help you? ");
	fgets(buffer, 0x100, stdin);

	printf(buffer);

	printf("Secret: 0x%x\n", secret);
	printf("Random: 0x%x\n", random);

	if(secret == random) {
		printf("You are a good pwner now!\n");
		return 0;
	}

	printf("You still have a lot to learn...\n");
	return 1;

}