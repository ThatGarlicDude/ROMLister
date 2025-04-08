#include <stdio.h>
#include "directoryAccessor.h"
#include "directoryGetter.h"
#include "fileLister.h"
#include "filePathArray.h"
#include "filePathPrinter.h"

int main(int argc, char* argv[]) {
	char* filePath = setUpFilePath(argv[1]);
	FilePathArray filePathArray = newFilePathArray(20);
	// Is the directory valid, or not?
	if (filePath == NULL) {
		perror("Error");
		return -1; // Do not proceed if the filepath is null.
	}
	// Open up the directory.
	if (openDirectory(filePath)) {
		perror("Error");
		return -1; // Do not proceed if the directory cannot be opened.
	}
	goThroughDirectory(&filePathArray);
	closeDirectory();
	printAllFilePaths(&filePathArray);
	return 0;
}
