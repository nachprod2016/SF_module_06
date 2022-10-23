#pragma once
#include "computerDisplay.h"
#include "PlayerMP3.h"

class SmartPhone final : public ComputerDisplay, public PlayerMP3
{
private:
    std::string OS;
    int sim;
public:
    SmartPhone();
    ~SmartPhone();
    void setSpecifications() override;
    void getSpecifications() override;
    void setOS();
    const std::string & getOS();
    void setSim();
    const int getSim();
};