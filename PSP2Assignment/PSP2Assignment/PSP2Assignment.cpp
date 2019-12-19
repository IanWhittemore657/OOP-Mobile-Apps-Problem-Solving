// PSP2Assignment.cpp : Defines the entry point for the console application.
//
//Ian Whittemore
//1700870
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct TTcell
{
	string Subject;
	string Lecturer;
	string RoomName;
};

struct TTcell times[5][9];

struct TTcell READ();
struct TTcell clearcell();
void clear();
void insert(int day, int time);
void showTimetable();
void showFunction(int daytime, int timeline);
void checkNull();

int _tmain(int argc, _TCHAR* argv[])
{
	
	
	int option;

	do
	{
		cout << "Please enter an option for the Timetable \n 1: Clear timetable \n 2: Insert into Timetable \n 3: Show Timetable \n 4: Show certain times on Timetable \n 5: Check availble slots \n 6: Exit Program" << endl;
		cin >> option;

		switch (option)
		{
			case 1:
			{

				//clearing table
				clear();
			}
			break;

			case 2:
			{
				//insert

				int day, time;

				cout << "Please enter what day you want , Enter the number related to day \n 0 = Monday \n 1 = Tuesday \n 2 = Wednesday \n 3 = Thursday \n 4 = Friday " << endl;
				cin >> day;

				cout << "Please enter what time you want , Enter the number related to time \n 0 = {9:00} \n 1 = {10:00} \n 2 = {11:00} \n 3 = {12:00} \n 4 = {1:00} \n 5 = {2:00} \n 6 = {3:00} \n 7 = {4:00} \n 8 = {5:00} " << endl;
				cin >> time;

				insert(day, time);
			}
			break;

			case 3:
			{
				//showTimetable
				showTimetable();

			}
			break;

			case 4:
			{
				//show certain time
				int daytime, timeline;
				cout << "Please enter what day you want see , Enter the number related to day \n 0 = Monday \n 1 = Tuesday \n 2 = Wednesday \n 3 = Thursday \n 4 = Friday " << endl;
				cin >> daytime;

				cout << "Please enter what time you want see, Enter the number related to time \n 0 = {9:00} \n 1 = {10:00} \n 2 = {11:00} \n 3 = {12:00} \n 4 = {1:00} \n 5 = {2:00} \n 6 = {3:00} \n 7 = {4:00} \n 8 = {5:00} " << endl;
				cin >> timeline;

				showFunction(daytime, timeline);
			}
			break;
			
			case 5:
			{
				checkNull();
			}
			break;

			case 6:
			{
				cout << "Thank you for using my program \n By Ian Whittemore \n ID : 1700870 " << endl;
				exit(0);
			}
			break;

			default :
				break;
		}


	} while (option <= 5);
	


	return 0;
}

struct TTcell READ()
{
	TTcell temp;

	cout << "Please enter the subject" << endl;
	cin >> temp.Subject;

	cout << "Please enter the lecturer" << endl;
	cin >> temp.Lecturer;

	cout << "Please enter the room name" << endl;
	cin >> temp.RoomName;

	return temp;
}

void clear()
{ 
	for(int i = 0;i < 4;i++)
	{
		for(int j = 0;j < 8;j++)
		{
			
			times[i][j] = clearcell();

		}
	}
}
struct TTcell clearcell()
{
	TTcell temp;
	temp.Subject = "";
	temp.Lecturer = "";
	temp.RoomName = "";

	return temp;
}

void insert( int day, int time)
{
	times[day][time] = READ();
}

void showTimetable()
{
	

    for(int i = 0;  i <= 4; ++i)
    {
		
        for(int j = 0; j <= 8; ++j)
        {

			switch (i)
			{
			case 0:
			{
				cout << "Monday" << endl;
			}
			break;

			case 1:
			{
				cout << "Tuesday" << endl;
			}
			break;

			case 2:
			{
				cout << "Wednesday" << endl;
			}
			break;

			case 3:
			{
				cout << "Thursday" << endl;
			}
			break;

			case 4:
			{
				cout << "Friday" << endl;
			}
			break;

			default:
				break;
			}

			switch (j)
			{
			case 0:
			{
				cout << "(9:00)" << endl;
			}
			break;

			case 1:
			{
				cout << "(10:00)" << endl;
			}
			break;

			case 2:
			{
				cout << "(11:00)" << endl;
			}
			break;

			case 3:
			{
				cout << "(12:00)" << endl;
			}
			break;

			case 4:
			{
				cout << "(1:00)" << endl;
			}
			break;

			case 5:
			{
				cout << "(2:00)" << endl;
			}
			break;

			case 6:
			{
				cout << "(3:00)" << endl;
			}
			break;

			case 7:
			{
				cout << "(4:00)" << endl;
			}
			break;

			case 8:
			{
				cout << "(5:00)" << endl;
			}
			break;

			default:
				break;
			}
			
			showFunction(i, j);

        }
    }
}

void showFunction(int daytime, int timeline)
{

	cout << times[daytime][timeline].Subject << " : " << times[daytime][timeline].Lecturer << " : " << times[daytime][timeline].RoomName << endl;

}
//if empty dont print

void checkNull()
{
	cout << "The availble times are : " << endl;
	

	for (int i = 0; i <= 4; i++)
	{
	
		

		for (int j = 0; j <= 8; j++)
		{
			
			if (times[i][j].Subject == "" )
			{
				switch (i)
				{
				case 0:
				{
					cout << "Monday" << endl;
				}
				break;
				//- 1
				case 1:
				{
					cout << "Tuesday" << endl;
				}
				break;

				case 2:
				{
					cout << "Wednesday" << endl;
				}
				break;

				case 3:
				{
					cout << "Thursday" << endl;
				}
				break;

				case 4:
				{
					cout << "Friday" << endl;
				}
				break;

				default:
					break;
				}

				switch (j)
				{
				case 0:
				{
					cout << "(9:00)" << endl;
				}
				break;

				case 1:
				{
					cout << "(10:00)" << endl;
				}
				break;

				case 2:
				{
					cout << "(11:00)" << endl;
				}
				break;

				case 3:
				{
					cout << "(12:00)" << endl;
				}
				break;

				case 4:
				{
					cout << "(1:00)" << endl;
				}
				break;

				case 5:
				{
					cout << "(2:00)" << endl;
				}
				break;

				case 6:
				{
					cout << "(3:00)" << endl;
				}
				break;

				case 7:
				{
					cout << "(4:00)" << endl;
				}
				break;

				case 8:
				{
					cout << "(5:00)" << endl;
				}
				break;

				default:
					break;
				}
			}
		}

	}
}

