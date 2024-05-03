#include <iostream>
#include <func.hpp>
#include <fstream>
#include <ctime>
#include <string>

int main()
{
    std::string CTime = CT::GetCTime();

    std::ifstream ifile("data.txt");
    if (!ifile.is_open())
    {
        std::cout << CTime << " File error" << std::endl;
        return -1;
    }
    int Lines = CT::CountLines(ifile) + 1;
    ifile.close();

    std::ofstream ofile("data.txt", std::ios::app);
    ofile << CT::ResultStr(Lines, CTime) << std::endl;
    ofile.close();

    return 0;
}