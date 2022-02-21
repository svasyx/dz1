#include "Data.h"
#include "Header.h"
using namespace std;

Date::Date()
{
    this->_day = 0;
    this->_month = 0;
    this->_year = 0;
}

void Date::InputDate()
{
	int day, month, year;

	cout << "Enter day, month and year"<< '\n';
	cin >> day >> month >> year;

    
    switch (CheckResult(day, month, year))
    {
    case 0:
    {
        SetDate(day, month, year);
        break;
    }
    case 1:
    {
        cout << "Введено неправильний рік!!! Повторіть введення!"<< '\n';
        InputDate();
        break;
    }
    case 2:
    {
        cout << "Введено неправильний місяць!!! Повторіть введення!" << '\n';
        InputDate();
        break;
    }
    case 3:
    {
        cout << "Введено неправильний день!!! Повторіть введення!" << '\n';
        InputDate();
        break;
    }

    };

}

void Date::SetDate(int day, int month, int year)
{
    this->_day = day;
    this->_month = month;
    this->_year = year;
}

void Date::Show()
{

    int tday, tyear, tmonth;
    tday = this->_day;
    tmonth = this->_month;
    tyear = this->_year;

    cout << "День:" << tday <<" Місяць:" << tmonth << " Рік:" << tyear;

}

int Date::CheckResult(int& day, int& month, int& year)
{
    if (year < 0 ||  year > 3000)
    {
        return 1;
    }
    if (month < 0 ||  month > 12)
    {
        return 2;
    }
    if (day < 0 || day > 31)
    {
       return 3;
    }
    return 0;

}
