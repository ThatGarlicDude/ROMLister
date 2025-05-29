#include <stdio.h>
#include "directoryReader.h"
#include "romFile.h"
#include "romIO.h"
#include "romSet.h"
#include "romSetPrinter.h"

int main(int argc, char* argv[]) {
	RomSet romSet = readDirectory(argv[1]);
	RomFile* rom = getROM(&romSet, 3); // Let's see if we can get the first gfx ROM in Pac-Man.
	readROM(rom);
	printROMSet(&romSet);
	printROMData(rom); // Print it all out!
	return 0;
}
