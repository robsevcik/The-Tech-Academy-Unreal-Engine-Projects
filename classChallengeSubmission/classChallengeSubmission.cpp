#include <iostream>
using namespace std;


class shape {
public:
    string color;
    void myMethod() {
        cout << "get area";
    }
};

class rectangle : public shape {
public:
    int Height;
    int Width;
};

class triangle : public shape {
public:
    int Base;
    int Height;
};

class circle : public shape {
public:
    int Radius;

};