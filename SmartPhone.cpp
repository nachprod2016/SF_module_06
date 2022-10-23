#include "SmartPhone.h"

SmartPhone::SmartPhone() : OS("Null"), sim(0) {}

SmartPhone::~SmartPhone(){ std::cout << "Деструктор смартфона" << std::endl; }

void SmartPhone::setOS()
{
    std::cout << "Операционная система: ";
    std::cin >> OS;
}

const std::string & SmartPhone::getOS()
{
    return OS;
}

void SmartPhone::setSim()
{
    std::cout << "Количество sim-карт: ";
    std::cin >> sim;
}

const int SmartPhone::getSim()
{
    return sim;
}

void SmartPhone::setSpecifications()
{
    std::cout << "Введите характеристики устройства: " << std::endl;
    setModel();
    setColor();
    setCost();
    setBattery();
    setMemoryFlash();
    setConnector();
    setDiagonal();
    setUpdateRate();
    setOS();
    setSim();
}

void SmartPhone::getSpecifications()
{
    std::cout << getDType() << ": " << getModel() << std::endl;
    std::cout << "Цвет: " << getColor() << std::endl;
    std::cout << "Объем батареи: " << getBattery() << std::endl;
    std::cout << "Объем флеш памяти: " << getMemoryFlash() << std::endl;
    std::cout << "Тип разъема: " << getConnector() << std::endl;
    std::cout << "Операционная система: " << OS << std::endl;
    std::cout << "Количество sim-карт: " << sim << std::endl;
    std::cout << "Диагональ экрана: " << getDiagonal() << std::endl;
    std::cout << "Частота обновления экрана: " << getUpdateRate() << std::endl;
    std::cout << "Цена: " << getCost() << std::endl;
    std::cout << std::endl;
}