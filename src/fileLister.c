#include <stdio.h>
#include <dirent.h>
#include "directoryAccessor.h"
#include "filePathArray.h"
#include "nullHandler.h"
#include "stringAdder.h"

void putFileInArray(FilePathArray* filePathArray, char* filePath) {
	int firstNull = findFirstNull(filePathArray);
	addString(filePathArray, firstNull, filePath);
}

void goThroughDirectory(FilePathArray* filePathArray) {
	while ((directoryEntry = readdir(currentDirectory)) != NULL) {
		if (directoryEntry->d_name[0] == '.') {
			continue;
		}
		putFileInArray(filePathArray, directoryEntry->d_name);
	}
	return;
}
