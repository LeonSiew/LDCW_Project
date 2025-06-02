#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float dailyUsage, savedEnergy = 0, carbonReduction;
    char useLEDs, unplugDevices, useSmartThermostat, useSolar;

    cout << fixed << setprecision(2); 
    cout << "Welcome to the Smart Living Energy Calculator!\n";
    cout << "Enter your average daily electricity usage in kWh: ";
    cin >> dailyUsage;

    
     if (useLEDs == 'y' || useLEDs == 'Y') {
        float saved = dailyUsage * 0.05;
        float co2 = saved * 0.774;
        savedEnergy += saved;
        cout << "Great! You're saving " << saved << " kWh/day and reducing CO2 by " 
             << co2 << " kg with LEDs.\n";
    } else {
        float wasted = dailyUsage * 0.05;
        float co2 = wasted * 0.774;
        cout << "You're potentially wasting " << wasted << " kWh/day and producing " 
             << co2 << " kg CO2 by not using LEDs.\n";
        cout << "💡 Recommendation: Switch to LED lighting to save energy and reduce emissions.\n";
    }

    cout << "\nDo you unplug devices when not in use? (y/n): ";
    cin >> unplugDevices;
    if (unplugDevices == 'y' || unplugDevices == 'Y') {
        float saved = dailyUsage * 0.03;
        float co2 = saved * 0.774;
        savedEnergy += saved;
        cout << "Awesome! You're saving " << saved << " kWh/day and reducing CO2 by " 
             << co2 << " kg by unplugging devices.\n";
    } else {
        float wasted = dailyUsage * 0.03;
        float co2 = wasted * 0.774;
        cout << "You're potentially wasting " << wasted << " kWh/day and producing " 
             << co2 << " kg CO2 by not unplugging devices.\n";
        cout << "🔌 Recommendation: Unplug devices when not in use to cut phantom energy loss.\n";
    }

   
    cout << "\nDo you use smart thermostats or timers? (y/n): ";
    cin >> useSmartThermostat;
    if (useSmartThermostat == 'y' || useSmartThermostat == 'Y') {
        float saved = dailyUsage * 0.07;
        float co2 = saved * 0.774;
        savedEnergy += saved;
        cout << "Nice! You're saving " << saved << " kWh/day and reducing CO2 by " 
             << co2 << " kg with smart thermostats.\n";
    } else {
        float wasted = dailyUsage * 0.07;
        float co2 = wasted * 0.774;
        cout << "You're potentially wasting " << wasted << " kWh/day and producing " 
             << co2 << " kg CO2 by not using smart thermostats.\n";
        cout << "🌡️ Recommendation: Use smart thermostats or timers to optimize energy use.\n";
    }

 
    cout << "\nDo you use solar panels or energy-efficient appliances? (y/n): ";
    cin >> useSolar;
    if (useSolar == 'y' || useSolar == 'Y') {
        float saved = dailyUsage * 0.10;
        float co2 = saved * 0.774;
        savedEnergy += saved;
        cout << "Excellent! You're saving " << saved << " kWh/day and reducing CO2 by " 
             << co2 << " kg with solar or efficient appliances.\n";
    }
    else {
        float wasted = dailyUsage * 0.10;
        float co2 = wasted * 0.774;
        cout << "You're potentially wasting " << wasted << " kWh/day and producing " 
             << co2 << " kg CO2 by not using solar or efficient appliances.\n";
        cout << "🔋 Recommendation: Invest in solar panels or energy-efficient appliances.\n";
    }

    
    carbonReduction = savedEnergy * 0.774;

    cout << "\n--- Smart Living Report ---\n";
    cout << "Total estimated energy saved per day: " << savedEnergy << " kWh\n";
    cout << "Total estimated CO2 reduction per day: " << carbonReduction << " kg\n";

    return 0;
}
