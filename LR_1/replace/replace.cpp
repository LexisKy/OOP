#include <iostream>
#include <string>
#include <optional>
#include <fstream>

const std::string WRONG_NUMBER_OF_ARGUMENTS = "Invalid number of arguments\n Use: replace.exe <input file> <output file> < search string> <replace string>\n";
const int NUMBER_OF_ARGUMENTS = 5;

struct Args
{
    std::string inputFileName;
    std::string ouputFileName;
    std::string searchString;
    std::string replaceString;
};

std::optional<Args> ParseArgs(int argc, char* argv[])
{
    if (argc != NUMBER_OF_ARGUMENTS)
    {
        std::cout << WRONG_NUMBER_OF_ARGUMENTS;

        return std::nullopt;
    }

    Args args;
    args.inputFileName = argv[1];
    args.ouputFileName = argv[2];
    args.searchString = argv[3];
    args.replaceString = argv[4];

    return args;
}

int main()
{
    std::cout << "Hello World!\n";
}

