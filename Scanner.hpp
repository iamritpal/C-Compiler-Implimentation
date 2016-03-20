#ifndef SCANNER_CLASS_H
#define SCANNER_CLASS_H

#include <fstream>
#include <cstdlib>      // needed for exit()

class Scanner {

	private:
		string sourceFile;

	public:
		Scanner();
		~Scanner();
		void setInputFile();

};

#endif