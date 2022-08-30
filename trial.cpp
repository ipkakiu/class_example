#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
// allow the variable name to be used outside the class
    string name;
    void set_salary(double potnetial_salary)
    {
        if (potnetial_salary < 0) salary = 0;
        else salary = potnetial_salary;
    }

    double get_salary()
    {
        return salary;
    }

    void print_bonus()
    {
        cout << name << " bonus: " << calculated_bonus() << endl;
    }
    private:
        double salary;
        double calculated_bonus()
        { 
            return salary * 0.10;
        }
};

int main()
{
    Employee employee001;
    employee001.name = "Kelvin";
    cout << employee001.name << endl;

    employee001.set_salary(30000);
    cout<< "salary: " << employee001.get_salary() << endl;

    employee001.print_bonus();

    return 0;
}
