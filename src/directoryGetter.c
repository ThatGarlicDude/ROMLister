#include <stdio.h>
#include <stdlib.h>
#include <linux/limits.h>

// Sets up the filepath that the ROM lister will work with.
char* setUpFilePath(char* filePath) {
	if (filePath == NULL) {
		filePath = "./"; // If there is no dedicated filepath, just refer to itself.
	}
	return realpath(filePath, NULL);
}
