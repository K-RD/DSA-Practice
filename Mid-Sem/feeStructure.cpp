// Q4. Write a C++ program that displays the total fee structure of GEC Arwal. for example
// Enter Year: 1
// Enter category 1 for General or OBC, 2 for SC or ST: 1 Your Fee structure is:
// Admission Fee: 10
// Tuition fee: 120
// Registration Fee: 2100
// Exam Fee: 7400
// Hostel Fee: 9600
// Mess Fee: 33600
// Total: 52,830

#include <iostream>
using namespace std;

int admissionFee;
int tuitionFee;
int registrationFee;
int examFee;
int hostelFee;
int messFee;
int total;

void yearlyFee(int year)
{
    if (year == 1)
    {
        admissionFee = 10;
        registrationFee = 2100;
    }
    else if (year == 3)
    {
        admissionFee = 10;
    }
    else if (year == 2 || year == 4)
    {
        admissionFee = 0;
    }
    else
    {
        cout << "Invalid year" << endl;
    }
    cout << "Admission Fee: " << admissionFee << endl;
}

void categoryFee(int category)
{
    if (category == 1)
    {
        tuitionFee = 120;
    }
    else if (category == 2)
    {
        tuitionFee = 0;
    }
    else
    {
        cout << "Invalid category" << endl;
    }

    examFee = 7400;
    hostelFee = 9600;
    messFee = 33600;
    total = admissionFee + tuitionFee + registrationFee + examFee + hostelFee + messFee;

    cout << "Tuition Fee: " << tuitionFee << endl;
    cout << "Registration Fee: " << registrationFee << endl;
    cout << "Exam Fee: " << examFee << endl;
    cout << "Hostel Fee: " << hostelFee << endl;
    cout << "Mess Fee: " << messFee << endl;
    cout << "Total: " << total << endl;
}

int main()
{
    int year, category;
    cout << "Please enter your current year (1-4): ";
    cin >> year;
    cout << endl
         << "Please enter your category \n(1 for GENERAL or OBC, 2 for SC or ST)\t: ";
    cin >> category;

    yearlyFee(year);
    categoryFee(category);

    return 0;
}