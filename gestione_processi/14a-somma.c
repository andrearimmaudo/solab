#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	if (argc==3) {
		int i=atoi(argv[1]);
		int j=atoi(argv[2]);

		printf("i+j = %d\n", i+j);
	} else {
		printf("Sono richiesti due argomenti. Ne sono stati inseriti %d\n",argc-1);
	}
}
