#pragma once
#include <iostream>

class IElectronics
{
    private:
    std::string model;
    std::string color;
    std::string dType;
    double cost;

    public:
    IElectronics();
    virtual ~IElectronics();
    virtual void setSpecifications() = 0;
    virtual void getSpecifications() = 0;
    void setModel();
    const std::string & getModel();
    void setColor();
    const std::string & getColor();
    void setCost();
    const double getCost();
    void setDType(const std::string & str);
    const std::string & getDType();
};