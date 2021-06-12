// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

class Circle {
private:
    double radius;
    string color;
    const double pi = 3.14;

public:
    Circle(){
        radius = 1.0;
        color = "red";
    }

    Circle(double radius, string color) {
        this-> radius=radius;
        this-> color=color;
    }

    double getRadius() { return radius;}

    string getColor() { return color;}

    double getArea() { return(pi*radius*radius);}

    void printData() {
        cout<<"Radius: "<<radius<<"\tColor: "<<color<<"\tArea: "<<getArea()<<endl<<endl;
    }
};

int main() {
    Circle c1(2.0,"blue");
    Circle c2(2.0,"red");
    Circle c3;

    cout<<"----Circle 01----\n";
    c1.printData();

    cout<<"----Circle 02----\n";
    c2.printData();

    cout<<"----Circle 03----\n";
    c3.printData();

    return 0;
}

