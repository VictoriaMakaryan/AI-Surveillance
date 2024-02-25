#include <iostream>

enum WeekDays {
    Monday, 
    Tuesday, 
    Wednesday, 
    Thursday, 
    Friday, 
    Saturday, 
    Sunday
};
    
struct Date {
    int day;
    int month;
    int year;
};

void PrintDate(const Date& date, WeekDays weekdays) {
    const char* dayNames[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    std::cout << "Day of week: " << dayNames[weekdays] << std::endl;
    std::cout << "Date: " << date.day << "/" << date.month << "/" << date.year << std::endl;
}

int main() {
    Date my_date = {25, 2, 2024};
    WeekDays my_weekday = Sunday;

    PrintDate(my_date, my_weekday);

    return 0;
}