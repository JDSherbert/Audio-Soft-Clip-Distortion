// ©2024 JDSherbert. All Rights Reserved.

#pragma once

#include <cmath>
#include <vector>

class Distortion 
{

public:

    Distortion(double amount);
    ~Distortion();

    void SetAmount(double amount);
    double Distort(double input);

    void ApplyDistortion(std::vector<double>& audioBuffer);

private:

    double distortionAmount;

};
