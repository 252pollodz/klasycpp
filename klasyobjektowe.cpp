#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    //Point p1, p2, p3;
    Point p1("P1", 0, 90);
    Point p2("P2", 30, 40);
    Point p3("P3", 50, 100);
    p1.show();
    p2.show();
    p3.show();

    cout << "Odleglosc pomiedzy punktami p1 i p2 wynosi  " << p1.distance(p2) << endl;
    const Point& p = p1.distant(p2);
    cout << "Punkt bardziej oddalonny od poczatku ukladu wspolrzednych to: " << endl;
    p.show();
    cout << "Odleglosc pomiedzy punktami p1 i p3 wynosi  " << p1.distance(p3) << endl;
    const Point& p_second = p1.distant(p3);
    cout << "Punkt bardziej oddalonny od poczatku ukladu wspolrzednych to: " << endl;
    p_second.show();


}