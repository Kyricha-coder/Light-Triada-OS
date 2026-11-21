	#include <stdio.h>
    #include <string.h>
	int main() {
		char answer[50];
		char word[] = "CLOWNFISH";
		int tries = 5;
		printf("%c", word[0]);
		printf("%c", word[1]);
		printf("%c", word[2]);
		printf("%c", word[3]);
		printf("%c___", word[4]);
		printf("%c\n", word[8]);
		while (1) {
		printf("What's this word?:");
			scanf_s("%49s", answer, (unsigned)sizeof(answer));
			if (strcmp(answer, "CLOWNFISH") == 0) {
				printf("YEEES");
				break;
			}
			else {
				tries--;
				printf("NOOOO,You have %d tries\n",tries);
				if (tries == 0) {
					printf("You not have tries");
					break;
				}
			}
		}
	}