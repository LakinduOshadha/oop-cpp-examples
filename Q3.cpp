// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

class Complex {
public:
    float real,imaginary;

    Complex() {
        real=0;
        imaginary=0;
    }
    Complex(float real,float imaginary) {
        this->real=real;
        this->imaginary=imaginary;
    }
    void sum(Complex cNum1,Complex cNum2) {
        real=cNum1.real+cNum2.real;
        imaginary=cNum1.imaginary+cNum2.imaginary;
    }
    void difference(Complex cNum1,Complex cNum2) {
        real=cNum1.real-cNum2.real;
        imaginary=cNum1.imaginary-cNum2.imaginary;
    }
    void product(Complex cNum1,Complex cNum2) {
       real=cNum1.real*cNum2.real-cNum1.imaginary*cNum2.imaginary;
       imaginary=cNum1.imaginary*cNum2.real+cNum1.real*cNum2.imaginary;
    }
    void print() {
        if(imaginary > 0) cout<<real<<"+"<<imaginary<<"i";
        else if(imaginary<0) cout<<real<<imaginary<<"i";
        else cout<<real;
    }

};

int main() {
    Complex cNum1,cNum2,results;

    cout<<"Enter the real part and imaginary part of the first complex number respectively : ";
    cin>>cNum1.real>>cNum1.imaginary;
    cout<<"Enter the real part and imaginary part of the second complex number respectively : ";
    cin>>cNum2.real>>cNum2.imaginary;

    results.sum(cNum1, cNum2);
    cout<<"(";cNum1.print();cout<<") + (";cNum2.print();cout<<") = ";results.print();cout<<endl;

    results.difference(cNum1,cNum2);
    cout<<"(";cNum1.print();cout<<") - (";cNum2.print();cout<<") = ";results.print();cout<<endl;

    results.product(cNum1,cNum2);
    cout<<"(";cNum1.print();cout<<") * (";cNum2.print();cout<<") = ";results.print();cout<<endl;
    return 0;
}

