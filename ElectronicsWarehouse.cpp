#include "ElectronicsWarehouse.h"

ElectronicsWarehouse::ElectronicsWarehouse(int size) : size(size), numDevices(0)
{
    wh = new IElectronics*[size];
    for (size_t i = 0; i < size; i++)
    {
        wh[i] = nullptr;
    }
}

ElectronicsWarehouse::~ElectronicsWarehouse()
{
    for (size_t i = 0; i < size; i++)
    {
        if (wh[i] != nullptr)
        {
            delete wh[i];
        }
    }
    delete wh;
    std::cout << "Деструктор склада" << std::endl;
}

void ElectronicsWarehouse::putDevice(int num)
{
    if (num > 0 && num <= size)
    {
        if (wh[num - 1] != nullptr)
        {
            std::cout << "Этa ячейка уже занята!" << std::endl;
        }
        else
        {
            int choice;
            std::cout << "Тип устройства: " << std::endl;
            std::cout << "1 - Монитор" << std::endl;
            std::cout << "2 - Мп3-плеер" << std::endl;
            std::cout << "3 - Смартфон" << std::endl;
            std::cin >> choice;
            switch (choice)
            {
                case 1:
                {
                    wh[num - 1] = new ComputerDisplay();
                    wh[num - 1]->setDType("Монитор");
                    break;
                }
                case 2:
                {
                    wh[num - 1] = new PlayerMP3();
                    wh[num - 1]->setDType("Мп3-плеер");
                    break;
                }
                case 3:
                {
                    wh[num - 1] = new SmartPhone();
                    wh[num - 1]->setDType("Смартфон");
                    break;
                }
            }
            if (wh[num - 1] != nullptr)
            {
                wh[num - 1]->setSpecifications();
                numDevices++;
            }
        }
    }
    else
    {
        std::cout << "Неверный код!" << std::endl;
    }
}

void ElectronicsWarehouse::buyDevice(int num)
{
    IElectronics* ptr = wh[num - 1];
    if (ptr == nullptr)
    {
        std::cout << "Эта ячейка пустая!" << std::endl;
    }
    else
    {
        wh[num - 1] = nullptr;
        delete ptr;
        numDevices--;
    } 
}

void ElectronicsWarehouse::showContent()
{
    for (size_t i = 0; i < size; i++)  
    {
        std::cout << "Код ячейки: " << i + 1 << std::endl;
        if (wh[i] != nullptr)
        {
            wh[i]->getSpecifications();
        }
        else 
        {
            std::cout << "Пусто!" << std::endl;
        }
        std::cout << std::endl;
    }
}

const int ElectronicsWarehouse::getSize()
{
    return size;
}