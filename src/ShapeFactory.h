#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Shape.h"

class ShapeFactory {
public:
    static Shape* createShape() {
        int ch, opt;
        cout << "Which Dimension shape you want to explore:\n";
        cout << "1 - Two Dimension\n2 - Three Dimension\nEnter your choice: ";
        cin >> ch;

        if (ch == 1) {
            cout << "Choose Shape:\n1.Rectangle\n2.Square\n3.Circle\nEnter: ";
            cin >> opt;
            switch (opt) {
            case 1: return new Rectangle();
            case 2: return new Square();
            case 3: return new Circle();
            default: cout << "Invalid option\n"; return nullptr;
            }
        }
        else if (ch == 2) {
            cout << "Choose Shape:\n1.Cube\n2.Cuboid\n3.Sphere\n4.Cone\nEnter: ";
            cin >> opt;
            switch (opt) {
            case 1: return new Cube();
            case 2: return new Cuboid();
            case 3: return new Sphere();
            case 4: return new Cone();
            default: cout << "Invalid option\n"; return nullptr;
            }
        }
        else {
            cout << "Choose either 1 or 2 only.\n";
            return nullptr;
        }
    }
};

#endif
