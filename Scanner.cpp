#include <iostream>

// Constructor

Scanner::Scanner()
{
	Scanner::setProgramFile();
}

// Set program file

void Scanner::setProgramFile()
{
	sourceFile = "samplesource.c";
}

//***************************************************
// Scanner (lexical analyzer) responsibilities
// 1. Read the program input source file char by char
// 2. Group the input chars into lexemes (meaningful words)
// 3. 
//***************************************************

void Scanner::Scan(void)
{
	char ch;

	ifstream inFile;
    inFile.open(source.c_str());

    if (inFile.fail())		// check for successful file open
    {
        cout << "ERROR - Unable to open file " << source << endl;
        cout << "Please check the input source filename and retry." << endl;
        exit(1);
    }
    else
    {
        while (inFile.get(ch))		// Read next character until end of file
            cout << ch << endl;
    }
}


