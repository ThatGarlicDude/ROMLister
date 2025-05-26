#include <stdio.h>
#include <stdlib.h>

// Sets up the working directory that the ROM lister will work with.
char* setUpWorkingDirectory(char* filePath) {
	if (filePath == NULL) {
		filePath = "./"; // If there is no dedicated filepath, just refer to itself.
	}
	return realpath(filePath, NULL);
}
