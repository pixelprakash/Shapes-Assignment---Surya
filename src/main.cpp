#include "ShapeFactory.h"

int main() {
    Shape* shape = ShapeFactory::createShape();
    if (!shape) return 0;

    shape->input();
    shape->compute();

    delete shape;
    return 0;
}
