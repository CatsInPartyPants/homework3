// homework3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//task 1

	int secondFromMidnight;
	int hours=0, minutes=0, seconds=0;
	cout << "������� ���������� ������, ��������� � 00:00 ->";
	cin >> secondFromMidnight;
	hours = secondFromMidnight / 60 / 60;
	minutes = secondFromMidnight / 60 % 60;
	seconds = secondFromMidnight % 60;
	cout << "������� �����: " << hours << ":" << minutes << ":" << seconds << endl;
	cout << "�� �������� ��������: " << 23 - hours << " �����, " << 59 - minutes << " �����, " << 60 - seconds << " ������." << endl;

	//task 2 

	int secondsFromStart;
	const int secFullDay = 28800;
	int workHours, workMinutes, workSeconds;
	cout << "������� ���������� ������ � ������ �������� ��� ->";
	cin >> secondsFromStart;
	workHours = (secFullDay - secondsFromStart) / 60 / 60;
	workMinutes = (secFullDay - secondsFromStart) / 60 % 60;
	workSeconds = (secFullDay - secondsFromStart) % 60;
	cout << "��� �������� �������� �� ������ " << workHours << " ����� " << workMinutes << " ����� " << workSeconds << " ������." << endl;

}
