// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

const float pi = 3.14;
class Circle {
private:
    float radius;
public:
    void setRadius(float radius) {
        this->radius = radius;
    }
    float getArea() {
        return(pi*radius*radius);
    }
};

int main() {
    float radius, area;
    cout<<"Enter the Radius of the Circle: ";
    cin>>radius;
    Circle C1;
    C1.setRadius(radius);
    area=C1.getArea();
    cout<<"Area of the Circle: "<<area<<endl;
    return 0;
}
