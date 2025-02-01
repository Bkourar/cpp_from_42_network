#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int ac, char **av) {

	if (ac != 4)
		return (std::cout << "fails argument\n", 1);
	std::string line;
	std::string extended = av[1];
	std::string found_it = av[2];
	std::ifstream infile(av[1]);
	if (!infile) {
		std::cerr << "Error: File '" << av[1] << "' not found or Permission denied." << std::endl;
		return 1;
	}
	extended += ".replace";
	std::ofstream outfile(extended.c_str());
	size_t n = -1;
	while (getline(infile, line)) {
		if (!line.empty() && !infile.eof())
			line.push_back('\n');
		else if (line.empty())
			line.push_back('\n');
		while (1) {
			n = line.find(found_it, n + 1);
			if (n != std::string::npos) {
				line.erase(n, found_it.length());
				line.insert(n, av[3]);
				n += line.length();
			}
			else
				break ;
		}
		outfile << line;
	}
}