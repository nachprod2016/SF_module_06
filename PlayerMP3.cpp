#include "PlayerMP3.h"

PlayerMP3::PlayerMP3() : battery(0), memoryFlash(0), connector("Null") {}

PlayerMP3::~PlayerMP3(){ std::cout << "Деструктор мп3-плеера" << std::endl; }

void PlayerMP3::setBattery()
{
    std::cout << "Объем батареи: ";
    std::cin >> battery;
}

const int PlayerMP3::getBattery()
{
    return battery;
}

void PlayerMP3::setMemoryFlash()
{
    std::cout << "Объем флеш памяти: ";
    std::cin >> memoryFlash;
}

const int PlayerMP3::getMemoryFlash()
{
    return memoryFlash;
}

void PlayerMP3::setConnector()
{
    std::cout << "Тип разъема: ";
    std::cin >> connector;
}

const std::string & PlayerMP3::getConnector()
{
    return connector;
}

void PlayerMP3::setSpecifications()
{
    std::cout << "Введите характеристики устройства: " << std::endl;
    setModel();
    setColor();
    setCost();
    setBattery();
    setMemoryFlash();
    setConnector();
}

void PlayerMP3::getSpecifications()
{
    std::cout << getDType() << ": " << getModel() << std::endl;
    std::cout << "Цвет: " << getColor() << std::endl;
    std::cout << "Объем батареи: " << battery << std::endl;
    std::cout << "Объем флеш памяти: " << memoryFlash << std::endl;
    std::cout << "Тип разъема: " << connector << std::endl;
    std::cout << "Цена: " << getCost() << std::endl;
    std::cout << std::endl;
}