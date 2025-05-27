#include <stdio.h>
#include "directoryReader.h"
#include "romSet.h"
#include "romSetPrinter.h"

int main(int argc, char* argv[]) {
	RomSet romSet = readDirectory(argv[1]);
    printROMSet(&romSet);
	return 0;
}
