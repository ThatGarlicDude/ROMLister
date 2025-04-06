#include <stdio.h>
#include <stdlib.h>
#include <linux/limits.h>
#include <unistd.h>
#include "directoryAccessor.h"
#include "filePathArray.h"

int main(int argc, char* argv[]) {
	char* filePath;
	printf("Let's set up the filepath we want to work with...\n");
	// Get the filepath we want to work with.
	if (argc > 1) {
		filePath = realpath(argv[1], NULL); // The first agument will be the filepath.
	} else {
		filePath = getcwd(filePath, PATH_MAX); // If there are no arguments, just use the current working directory.
	}
	// Is the directory valid, or not?
	if (filePath == NULL) {
		perror("Error");
		return -1; // Do not proceed if the filepath is null.
	}
	printf("The filepath is: %s\n", filePath);
	return 0;
}
