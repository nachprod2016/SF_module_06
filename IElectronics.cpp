#include "IElectronics.h"

IElectronics::IElectronics() : model("Null"), color("Null"), cost(0.0){}

IElectronics::~IElectronics(){ std::cout << "Деструктор базового класса" << std::endl; }

void IElectronics::setModel()
{
    std::cout << "Модель: ";
    std::cin >> model;
}

const std::string & IElectronics::getModel()
{
    return model;
}

void IElectronics::setColor()
{
    std::cout << "Цвет: ";
    std::cin >> color;
}

const std::string & IElectronics::getColor()
{
    return color;
}

void IElectronics::setCost()
{
    std::cout << "Цена: ";
    std::cin >> cost;
}

const double IElectronics::getCost()
{
    return cost;
}

void IElectronics::setDType(const std::string & str)
{
    dType = str;
}

const std::string & IElectronics::getDType()
{
    return dType;
}