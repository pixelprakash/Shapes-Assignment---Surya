#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual void input() = 0;
    virtual void compute() = 0;
    virtual ~Shape() {}
};

// Rectangle
class Rectangle : public Shape {
    int l, b;
public:
    void input() override {
        cout << "Enter length and breadth of Rectangle: ";
        cin >> l >> b;
    }
    void compute() override {
        int a = l * b;
        int p = 2 * (l + b);
        ofstream file("output.txt", ios::app);
        cout << "Area = " << a << ", Perimeter = " << p << endl;
        file << "Rectangle (l=" << l << ", b=" << b << ") => Area=" << a << ", Perimeter=" << p << endl;
        file.close();
    }
};

// Square
class Square : public Shape {
    int s;
public:
    void input() override {
        cout << "Enter side of Square: ";
        cin >> s;
    }
    void compute() override {
        int a = s * s;
        int p = 4 * s;
        ofstream file("output.txt", ios::app);
        cout << "Area = " << a << ", Perimeter = " << p << endl;
        file << "Square (s=" << s << ") => Area=" << a << ", Perimeter=" << p << endl;
        file.close();
    }
};

// Circle
class Circle : public Shape {
    int r;
    const double pi = 3.14;
public:
    void input() override {
        cout << "Enter radius of Circle: ";
        cin >> r;
    }
    void compute() override {
        int a = pi * r * r;
        int p = 2 * pi * r;
        ofstream file("output.txt", ios::app);
        cout << "Area = " << a << ", Perimeter = " << p << endl;
        file << "Circle (r=" << r << ") => Area=" << a << ", Perimeter=" << p << endl;
        file.close();
    }
};

// Cube
class Cube : public Shape {
    int s;
public:
    void input() override {
        cout << "Enter side of Cube: ";
        cin >> s;
    }
    void compute() override {
        int a = 6 * s * s;
        int p = 12 * s;
        ofstream file("output.txt", ios::app);
        cout << "Surface Area = " << a << ", Perimeter = " << p << endl;
        file << "Cube (s=" << s << ") => Surface Area=" << a << ", Perimeter=" << p << endl;
        file.close();
    }
};

// Cuboid
class Cuboid : public Shape {
    int l, b, h;
public:
    void input() override {
        cout << "Enter length, breadth and height of Cuboid: ";
        cin >> l >> b >> h;
    }
    void compute() override {
        int a = 2 * ((l * b) + (b * h) + (h * l));
        int p = 4 * (l + b + h);
        ofstream file("output.txt", ios::app);
        cout << "Surface Area = " << a << ", Perimeter = " << p << endl;
        file << "Cuboid (l=" << l << ", b=" << b << ", h=" << h << ") => Area=" << a << ", Perimeter=" << p << endl;
        file.close();
    }
};

// Sphere
class Sphere : public Shape {
    int r;
    const double pi = 3.14;
public:
    void input() override {
        cout << "Enter radius of Sphere: ";
        cin >> r;
    }
    void compute() override {
        int a = 4 * pi * r * r;
        float v = (4.0 / 3.0) * pi * r * r * r;
        ofstream file("output.txt", ios::app);
        cout << "Surface Area = " << a << ", Volume = " << v << endl;
        file << "Sphere (r=" << r << ") => Surface Area=" << a << ", Volume=" << v << endl;
        file.close();
    }
};

// Cone
class Cone : public Shape {
    int r, h;
    const double pi = 3.14;
public:
    void input() override {
        cout << "Enter radius and height of Cone: ";
        cin >> r >> h;
    }
    void compute() override {
        float l = sqrt(r * r + h * h);
        float a = pi * r * (r + l);
        float v = (1.0 / 3.0) * pi * r * r * h;
        ofstream file("output.txt", ios::app);
        cout << "Surface Area = " << a << ", Volume = " << v << endl;
        file << "Cone (r=" << r << ", h=" << h << ") => Surface Area=" << a << ", Volume=" << v << endl;
        file.close();
    }
};

#endif
