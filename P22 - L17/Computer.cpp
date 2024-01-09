#include "Computer.h"

Computer::Computer(string name, float frequency, int ram, bool dvd, float cost)
{
    this->name = name;
    this->frequency = frequency;
    this->ram = ram;
    this->dvd = dvd;
    this->cost = cost;
}

int Computer::getRam() const
{
    return ram;
}

void Computer::show() const
{
    cout << "Name: " << name << endl
        << "Frequency: " << frequency << "GHz" << endl
        << "Ram: " << ram << "GB" << endl
        << "DVD: " << dvd << endl
        << "Cost: " << cost << "UAH." << endl;
}
