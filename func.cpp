#include <func.hpp>
#include <fstream>
#include <string>
#include <ctime>

namespace CT
{
    std::string GetCTime() 
    {
        std::time_t t = std::time(nullptr);
        char CTime[24];
        std::strftime(CTime, sizeof(CTime), "%Y-%m-%d-%H-%M-%S", std::localtime(&t));
        return std::string(CTime);
    }

    int CountLines(std::ifstream& file) 
    {
        int count = 0;
        std::string line;
        while (std::getline(file, line))
            count++;

        return count;
    }

    std::string CountInStr(int count)
    {
        std::string CountStr;
        CountStr = std::to_string(count) + "-";
        return CountStr;
    }

    std::string ResultStr(int count, std::string CTime)
    {
        std::string Result = CountInStr(count) + CTime;
        return Result;
    }
}