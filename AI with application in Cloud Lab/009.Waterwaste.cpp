#include <iostream>
#include <random>

// Function to simulate the treatment process with uncertain parameters
double simulateTreatmentProcess(double incomingPollutionConcentration, double treatmentEfficiency) {
    // Random number generator for introducing uncertainties
    std::random_device rd;
    std::mt19937 gen(rd());
   
    // Generate a normal distribution for incoming pollution concentration
    std::normal_distribution<> incomingDist(incomingPollutionConcentration, 0.1); // Standard deviation of 0.1
   
    // Generate a normal distribution for treatment efficiency
    std::normal_distribution<> efficiencyDist(treatmentEfficiency, 0.05); // Standard deviation of 0.05
   
    // Simulate treatment process
    double treatedPollutionConcentration = incomingDist(gen) * (1 - efficiencyDist(gen));
   
    return treatedPollutionConcentration;
}

int main() {
    // Define uncertain parameters
    double incomingPollutionConcentration = 100; // mg/L (milligrams per liter)
    double treatmentEfficiency = 0.8; // 80% efficiency
   
    // Simulate treatment process
    double treatedPollutionConcentration = simulateTreatmentProcess(incomingPollutionConcentration, treatmentEfficiency);
   
    // Output result
    std::cout << "Incoming Pollution Concentration: " << incomingPollutionConcentration << " mg/L\n";
    std::cout << "Treatment Efficiency: " << treatmentEfficiency * 100 << "%\n";
    std::cout << "Treated Pollution Concentration: " << treatedPollutionConcentration << " mg/L\n";
   
    return 0;
}
