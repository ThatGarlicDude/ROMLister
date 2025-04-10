#include <dirent.h>
#include "filePathArray.h"

#ifndef FILE_LISTER_H
#define FILE_LISTER_H

	void putFileInArray(FilePathArray* filePathArray, char* filePath);

	void goThroughDirectory(FilePathArray* filePathArray);

#endif
