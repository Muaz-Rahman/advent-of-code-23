// https://adventofcode.com/2023/day/2
#include "../commonHeaders.h"
// Game 2: 2 green; 15 red, 5 blue; 2 green, 4 blue, 5 red; 3 green, 6 blue, 6 red; 6 blue, 1 green
int main()
{
    ifstream inputFile("day2.txt");
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
    {
        cerr << "Unable to open the file." << endl;
    }
}