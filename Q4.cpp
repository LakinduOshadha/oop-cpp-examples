// @author Lakindu Oshadha (lakinduoshadha98@gmail.com
#include<iostream>
using namespace std;

class Distance {
private:
    int feet=0;
    int inches=0;

public:
    Distance(int feet,int inches) {
        this->feet=feet;
        if(inches>=0 && inches<=12) this->inches=inches;
    }

    int getFeet() {
        return feet;
    }
    int getInches() {
        return inches;
    }
    void print() {
        cout<<feet<<"ft "<<inches<<"'"<<endl;
    }

    Distance operator = (Distance d) {
        feet = d.feet;
        inches = d.inches;
    }
};

int main () {
    Distance d1(11,10);
    Distance d2(5,11);

    cout<< "First Distance: " ;
    d1.print();

    cout<<"Second Distance: ";
    d2.print();
    d1 = d2;

    cout<<"After equaling the second distance to first distance: \n";
    cout<<"First Distance: ";

    d1.print();
}
