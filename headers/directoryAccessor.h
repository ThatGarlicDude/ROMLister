#ifndef DIRECTORY_ACCESSOR_H
#define DIRECTORY_ACCESSOR_H

	#include <dirent.h>

	// Opens up a directory.
	void openDirectory(const char* directory);

	// Closes the current directory.
	void closeDirectory();

	// Gets the current directory.
	DIR* getCurrentDirectory();

	// Gets the directory entry.
	struct dirent* getDirectoryEntry();

#endif
