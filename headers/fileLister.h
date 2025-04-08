#ifndef FILE_LISTER_H
#define FILE_LISTER_H

	#include <dirent.h>
	#include "filePathArray.h"

	void putFileInArray(FilePathArray* filePathArray, char* filePath);

	void goThroughDirectory(FilePathArray* filePathArray);

#endif
