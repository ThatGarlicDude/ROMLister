#include <stdio.h>
#include <dirent.h>

DIR* currentDirectory;
struct dirent* directoryEntry;

// Opens up a directory.
int openDirectory(const char* directory) {
	printf("Opening %s...\n", directory);
	currentDirectory = opendir(directory);
	// Check if the directory couldn't be opened.
	if (currentDirectory == NULL) {
		printf("Cannot open %s\n", directory);
		return -1;
	}
	printf("Directory opened.\n");
	return 0;
}

// Closes the current directory.
int closeDirectory() {
	if (currentDirectory == NULL) {
		return -1;
	}
	closedir(currentDirectory);
	printf("Directory closed.\n");
	return 0;
}
