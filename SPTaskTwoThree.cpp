#include <iostream>
using namespace std;

struct Employee {
    char name[40];
    double salary;  
};

int main()
{
    setlocale(LC_ALL, "ru");

    Employee e1;
    cout << "Введите имя рабочего: ";
    cin >> e1.name;
    cout << endl;
    cout << "Введите зарплату рабочего рабочего: ";
    cin >> e1.salary;
    cout << endl;
    cout << "Рабочий: " << e1.name << " Зарплата до повышения: " << e1.salary << endl;
    int p = e1.salary * 0.1;
    e1.salary += p;
    cout << "Рабочий: " << e1.name << " Зарплата после повышения: " << e1.salary << endl;
}
