// ©2024 JDSherbert. All Rights Reserved.

#include "distortion.h"

Distortion::Distortion(double amount) 
: distortionAmount(amount) 
{
}

Distortion::~Distortion() 
{
}

void Distortion::SetAmount(double amount) 
{
    distortionAmount = amount;
}

double Distortion::Distort(double input) 
{
    // Apply a simple soft clipping function
    return std::tanh(distortionAmount * input);
}

void Distortion::ApplyDistortion(std::vector<double>& audioBuffer) 
{
    for (double& sample : audioBuffer) 
    {
        sample = Distort(sample);
    }
}
