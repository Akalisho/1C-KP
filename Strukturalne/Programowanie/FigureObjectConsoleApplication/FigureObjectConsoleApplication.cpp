﻿
// GeometricFiguresConsoleApplication.cpp
#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Trapeze.h"

//Napisz klasy które opisz¹ figury geometryczne: 
// trapez, romb, równoleg³obok, prostok¹t i kwadrat.
// Zdefiniuj podstawowe metody.

int main()
{
        Rectangle rec(6, 4);
        rec.ShowInformation();
        Square sq(5, "Ala");
        sq.ShowInformation();
}