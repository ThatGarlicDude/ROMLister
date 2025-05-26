#include <stdio.h>
#include "cwdGetter.h"
#include "directoryReader.h"
#include "romSet.h"
#include "romSetPrinter.h"

int main(int argc, char* argv[]) {
	char* cwd = setUpWorkingDirectory(argv[1]);
	RomSet romSet = readDirectory(cwd);
    printROMSet(&romSet);
	return 0;
}
