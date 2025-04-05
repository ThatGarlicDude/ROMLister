#include <stdio.h>
#include "filePathArray.h"

int main(int argc, char* argv[]) {
	FilePathArray paths = newFilePathArray(3);
	printf("Is this working?\n");
	printf("Size of filePaths is: %zu.\n", paths.size);
	return 0;
}
