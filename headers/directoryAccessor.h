#ifndef DIRECTORY_ACCESSOR_H
#define DIRECTORY_ACCESSOR_H

	#include <dirent.h>

	extern DIR* currentDirectory;
	extern struct dirent* directoryEntry;

	// Opens up a directory.
	int openDirectory(const char* directory);

	// Closes the current directory.
	int closeDirectory();

#endif
