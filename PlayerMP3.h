#pragma once
#include "IElectronics.h"

class PlayerMP3 : public virtual IElectronics
{
    private:
    int battery;
    int memoryFlash;
    std::string connector;

    public: 
    PlayerMP3();
    virtual ~PlayerMP3();
    void setSpecifications() override;
    void getSpecifications() override;
    void setBattery();
    const int getBattery();
    void setMemoryFlash();
    const int getMemoryFlash();
    void setConnector();
    const std::string & getConnector();
};