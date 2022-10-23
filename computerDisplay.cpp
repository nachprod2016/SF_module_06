#include "computerDisplay.h"

ComputerDisplay::ComputerDisplay() : diagonal(0.0), updateRate(0){}

ComputerDisplay::~ComputerDisplay(){ std::cout << "Деструктор монитора" << std::endl; }

void ComputerDisplay::setDiagonal()
{
    std::cout << "Диагональ экрана: ";
    std::cin >> diagonal;
}

const double ComputerDisplay::getDiagonal()
{
    return diagonal;
}

void ComputerDisplay::setUpdateRate()
{
    std::cout << "Частота обновления экрана: ";
    std::cin >> updateRate;
}

const int ComputerDisplay::getUpdateRate()
{
    return updateRate;
}

void ComputerDisplay::setSpecifications()
{
    std::cout << "Введите характеристики устройства: " << std::endl;
    setModel();
    setColor();
    setCost();
    setDiagonal();
    setUpdateRate();
}

void ComputerDisplay::getSpecifications()
{
    std::cout << getDType() << ": " << getModel() << std::endl;
    std::cout << "Цвет: " << getColor() << std::endl;
    std::cout << "Диагональ экрана: " << diagonal << std::endl;
    std::cout << "Частота обновления экрана: " << updateRate << std::endl;
    std::cout << "Цена: " << getCost() << std::endl;
    std::cout << std::endl;
}