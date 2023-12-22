// https://adventofcode.com/2023/day/1
#include "../commonHeaders.h"
// a1b2c3d4e5f
// treb7uchet
int main()
{
    ifstream inputFile("input.txt");
    if (inputFile.is_open())
    {
        string line;
        while (getline(inputFile, line))
        {
            cout << line << endl;
        }

        inputFile.close();
    }
    else
        cerr << "Unable to open the file." << endl;
}