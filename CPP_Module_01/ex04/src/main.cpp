#include <iostream>
#include <fstream>

void replaceContent(std::ifstream &infile, std::ofstream &outfile, const std::string &s1, const std::string &s2) {
	std::string line;

	while (std::getline(infile, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line << '\n';
	}
}

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cerr << "./replace needs 3 arguments: <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	if (!*argv[2]) {
		std::cerr << "./replace: <s1> contains no content" << std::endl;
		return 1;
	}

	std::string file = argv[1];
	std::ifstream infile(file);
	if (!infile) {
		std::cerr << "./replace: " << argv[1] << ": could not open file" << std::endl;
		return 1;
	}

	std::ofstream outfile(file + ".replace");
	if (!outfile) {
		std::cerr << "./replace: could not create output file " << file << ".replace" << std::endl;
		return 1;
	}
	replaceContent(infile, outfile, argv[2], argv[3]);
	return 0;
}
