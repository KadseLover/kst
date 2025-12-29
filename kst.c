#include<stdio.h>

int main(int argc, char *argv[]) {
	// create file / open file and append given text
	
	if (argc <= 1) {
		printf("kst [-filename] [-text to append] [-text to append]\n");
	} else {
		FILE *file;
		file = fopen(argv[1], "a");
		if (file != NULL) {	
			for (int i = 2; i < argc; i++) {
				fprintf(file, "%s\n", argv[i]);
			}	
		} else {
			printf("%s: Error opening file", argv[1]);
		}

		fclose(file);
	}
}
