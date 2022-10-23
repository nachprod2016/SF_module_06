#pragma once
#include "IElectronics.h"

class ComputerDisplay : public virtual IElectronics
{
private:
    double diagonal;
    int updateRate;

public:
    ComputerDisplay();
    ~ComputerDisplay();
    void setSpecifications() override;
    void getSpecifications() override;
    void setDiagonal();
    const double getDiagonal();
    void setUpdateRate();
    const int getUpdateRate();
};
