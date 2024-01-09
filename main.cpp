// ©2024 JDSherbert. All rights reserved.

#include <iostream> // For debug printing
#include <cmath> // For M_PI

#include "Distortion.h"

// Function to generate a simple input signal (for demonstration purposes)
double GenerateInputSignal(double frequency, double time)
{
    return sin(2.0 * M_PI * frequency * time);
}

// Function to print the wave values
void PrintMe(std::string type, std::string value)
{
    std::cout << type << " : " << value << std::endl;
}

int main() 
{
    // Sample rate and duration of the sine wave
    const int sampleRate = 44100;  // 44.1 kHz
    const double duration = 5.0;   // 5 seconds

    // Number of samples in the buffer
    const int numSamples = static_cast<int>(sampleRate * duration);

    // Generate a sine wave vector
    std::vector<double> sineWave;
    for (double i = 0; i < numSamples; ++i) 
    {
        sineWave.push_back(GenerateInputSignal(440.0, i / sampleRate)); 
        /* In the context of this example, we're generating a sinusoidal signal with a frequency of 440.0 Hertz;
         * this division scales the loop index to represent time in seconds. 
         * The formula for calculating the angle (argument) of the sine function is typically given as 2 * π * frequency * time. 
         * In this case, time is derived by dividing the loop index (i) by the sample rate (44100).
         */
    }

    // Print the original sine wave values to the console
    for (double value : sineWave) 
    {
        PrintMe("Original", value);
    }

    // Create a Distortion object with an initial distortion amount
    Distortion distortionEffect(0.5);

    // Apply distortion to the sine wave
    distortionEffect.ApplyDistortion(sineWave);

    // Print the distorted sine wave values to the console
    for (double value : sineWave) 
    {
        PrintMe("Distorted", value);
    }

    return 0;
}
