#pragma once
#include "SmartPhone.h"

class ElectronicsWarehouse
{
    private:
    size_t size;
    size_t numDevices;
    IElectronics** wh; 

    public:
    ElectronicsWarehouse(int size);
    ~ElectronicsWarehouse();
    const int getSize();
    void buyDevice(int num);
    void putDevice(int num);
    void showContent();
};