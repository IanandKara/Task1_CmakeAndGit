#pragma once
#include <string>

namespace CT
{
	std::string GetCTime(); // ��������� ���� � ������� ������� ���������
	int CountLines(std::ifstream& file); // ������� ���-�� ����� � ����� (���-�� �������� �����)
	std::string CountInStr(int count); // ������� int � str (��� ������ �������)
	std::string ResultStr(int count, std::string CTime); // ����������� � ���� ������ ������ ������� � ����/�������
}