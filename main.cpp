#include "ElectronicsWarehouse.h"
#include "myFuncs.h"
#include "locale"

int main()
{
    setlocale(LC_ALL, "Russian");
    ElectronicsWarehouse* wh = nullptr;
    bool flag = true;
    int choice;
    while (flag)
    {
        std::cout << "1 - Создать склад" << std::endl;
        std::cout << "2 - Положить устройство на склад" << std::endl;
        std::cout << "3 - Забрать устройство со склада" << std::endl;
        std::cout << "4 - Показать содержимое склада" << std::endl;
        std::cout << "5 - Удалить склад" << std::endl;
        std::cout << "0 - Завершить программу" << std::endl;
        std::cout << "Выберите опцию: ";
        std::cin >> choice;
        std::cout << std::endl;
        switch (choice)
        {
            case 1:
            {
                if (wh == nullptr)
                {
                    int size;
                    std::cout << "Введите размер склада: ";
                    std::cin >> size;
                    wh = new ElectronicsWarehouse(size);
                    std::cout << std::endl;
                }
                else
                {
                    std::cout << "Склад уже создан!" << std::endl;
                }
                std::cout << std::endl;
                break;
            }
            case 2:
            {
                if (wh != nullptr)
                {
                    int num = getNumber(1, wh->getSize());
                    wh->putDevice(num);
                }
                std::cout << std::endl;
                break;
            }
            case 3:
            {
                if (wh != nullptr)
                {
                    int num = getNumber(1, wh->getSize());
                    wh->buyDevice(num);
                }
                std::cout << std::endl;
                break;
            }
            case 4:
            {
                if (wh != nullptr)
                {
                    wh->showContent();
                }
                std::cout << std::endl;
                break;
            }
            case 5:
            {
                if (wh != nullptr)
                {
                    ElectronicsWarehouse* ptr = wh;
                    wh = nullptr;
                    delete ptr;
                }
                else
                {
                    std::cout << "Склад еще не создан!" << std::endl;
                }
                std::cout << std::endl;
                break;
            }
            case 0:
            {
                if (wh != nullptr)
                {
                    delete wh;
                }
                flag = false;
                break;
            }
        }
    }
    return 0;
}