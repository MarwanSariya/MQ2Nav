//
// Main.cpp
//

#include "meshgen/Application.h"

int main(int argc, char* argv[])
{
	std::string startingZone;
	if (argc > 1)
		startingZone = argv[1];

	Application window(startingZone);
	return window.RunMainLoop();
}
