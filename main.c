#include <stdio.h>
#include <string.h>

void say(char* message);

int main(int argc, char** argv) {

	if(argc < 2 || strlen(argv[1]) < 1) {
		printf("Usage: %s <message>\n", argv[0]);
		return 1;
	}

	say(argv[1]);
}

void say(char* message) {

	size_t len = strlen(message);	
	int i = 0, j = 0, k = 0;
	if (len > 1) {
		i = len - 1;
		j = i;
		k = j;
	}

	printf("                 _");
	while(i-- != 0) { printf("_"); }
	printf("\n");
	printf("         ^__^   / ");
	while(j-- != 0) { printf(" "); }
	printf("\\  \n");
	printf("         (oo)  ( %s )\n", message);
	printf("  /-------\\/ --'\\_");
	while(k-- != 0) { printf("_"); }
	printf("/ \n");
	printf(" / |     ||\n");
	printf("*  ||W---||\n");
	printf("   ^^    ^^\n");
}
