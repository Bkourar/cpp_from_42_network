#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string extendedReplace(std::string input)
{
	std::string	output;
	size_t		last_found = std::string::npos;

	last_found = input.find_last_of(".");
	if (last_found != std::string::npos)
		output = input.replace(last_found, input.substr(last_found + 1).length() + 1, ".replace");
	else
		output = input + ".replace";
	return (output);
}

int main(int ac, char **av) {

	if (ac != 4)
		return (std::cout << "fails argument\n", 1);
	std::string line;
	std::string found_it = av[2];
	std::string extended;
	std::ifstream infile(av[1]);
	if (!infile) {
		std::cerr << "Error: File '" << av[1] << "' not found or Permission denied." << std::endl;
		return 1;
	}
	extended = extendedReplace(av[1]);
	std::ofstream outfile(extended);
	size_t n = -1;
	while (getline(infile, line))
	{
		if (!line.empty() && !infile.eof())
			line.push_back('\n');
		while (1)
		{
			n = line.find(found_it, n + 1);
			if (n != std::string::npos)
				line.replace(n, found_it.length(), av[3]);
			else
				break ;
		}
		outfile << line;
	}
}