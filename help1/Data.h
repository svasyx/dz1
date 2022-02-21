#include "Header.h"
class Date
{
public:
    Date();
    void InputDate();
    void SetDate(int day, int month, int year);
    void Show();
    int CheckResult(int& day, int& month, int& year);
private:
    int _day;
    int _month;
    int _year;
};