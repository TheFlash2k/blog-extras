// gcc -o fsb-got-overwrite fsb-got-overwrite.c -w -no-pie

#include <stdio.h>
#include <stdlib.h>

void win() {
	puts("Congratulations, you have successfully overwritten the GOT and redirected execution...");
	printf("CTF{f4k3_fl4g_f0r_73s71ng}\n");
}

int main() {

	char buffer[0x100];

	while(1) {
		printf("You may enter whatever you want: ");
		fgets(buffer, 0x100, stdin);
		if(strcmp(buffer, "exit\n") == 0)
			break;
		printf(buffer);
	}
	exit(0);
}
