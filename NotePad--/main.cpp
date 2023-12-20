#include <iostream>
#include "TextFile.h"

int main(int argc, char* argv[])
{
	using namespace std;

	if (argc != 2) return 1;

	TextFile file(argv[1]);

	cout << file.getContent();

	file.commitContent("Hiiiiii");

	cout << file.getContent();

	file.commitContent("N E W");

	cout << file.getContent();
}