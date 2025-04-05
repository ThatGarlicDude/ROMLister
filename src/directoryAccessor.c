#include <stdio.h>
#include <dirent.h>

DIR* currentDirectory;
struct dirent* directoryEntry;

// Opens up a directory.
void openDirectory(const char* directory) {
	return;
}

// Closes the current directory.
void closeDirectory() {
	return;
}

// Gets the current directory.
DIR* getCurrentDirectory() {
	return currentDirectory;
}

// Gets the directory entry.
struct dirent* getDirectoryEntry() {
	return directoryEntry;
}
