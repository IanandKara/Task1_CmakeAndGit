#pragma once
#include <string>

namespace CT
{
	std::string GetCTime(); // Получение даты и времени запуска программы
	int CountLines(std::ifstream& file); // Подсчет кол-ва строк в файле (кол-ва запусков файла)
	std::string CountInStr(int count); // Перевод int в str (для номера запуска)
	std::string ResultStr(int count, std::string CTime); // Объединение в одну строку номера запуска и даты/времени
}