// #include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    int r,im;
    public:
    ComplexNumbers(int real,int imag){
        r=real;
        im=imag;
    }
    void plus(ComplexNumbers c){
        r=c.r+r;
        im=c.im+im;
    }
    void multiply(ComplexNumbers c){
        r=((r*c.r)-(im*c.im));
        im=((im*c.r)+(r*c.im));
    }
    void print() { 
        cout << r;
        if (im>=0){
            cout<<" + i";
        }else {
            cout<<" - i";
            im=(-1)*im;
        } 
        cout<<(im);
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}