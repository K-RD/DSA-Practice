// 3. Write a C++ program that inputs salary.
//  If the salary is 20000 or more, it deducts 7% of the salary.
//  If the salary is 10000 or more but less than 20000 it deducts 1000 from the salary.
//  If the salary is less than 10000, it deducts nothing. It finally displays the net salary.

#include <iostream>
using namespace std;

int main()
{
    long salary;
    cout << "Please Enter your Salary:: ";
    cin >> salary;

    if (salary >= 20000)
    {
        long deduction = salary * 0.07;
        cout << "Deduction from your salary is 7% that is ₹" << deduction << endl;
        cout << "Total salary after deduction is ₹" << (salary - deduction) << endl;
    }
    else if (salary >= 10000)
    {
        long deduction = 1000;
        cout << "Deduction from your salary is ₹" << deduction << endl;
        cout << "Total salary after deduction is ₹" << (salary - deduction) << endl;
    }
    else
    {
        long deduction = 0;
        cout << "Deduction from your salary is ₹" << deduction << endl;
        cout << "Total salary after deduction is ₹" << (salary - deduction) << endl;
    }

    return 0;
}