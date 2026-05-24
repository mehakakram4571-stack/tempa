#include "Thermostat.h"

// ================= SmartDevice =================

SmartDevice::SmartDevice(string name)
{
    deviceName = name;
    powerStatus = false;
}

void SmartDevice::turnOn()
{
    powerStatus = true;
    cout << "\n " << deviceName << " turned ON.\n";
}

void SmartDevice::turnOff()
{
    powerStatus = false;
    cout << "\n " << deviceName << " turned OFF.\n";
}

SmartDevice::~SmartDevice()
{
    cout << "\n SmartDevice Destructor Called.\n";
}

// ================= Thermostat =================

Thermostat::Thermostat(string name)
    : SmartDevice(name)
{
    targetTemp = 24.0;
    currentTemp = 22.0;
    mode = "auto";
    scheduledTime = "Not Set";
}

void Thermostat::setTemperature(float temp)
{
    targetTemp = temp;

    cout << "\n Target temperature set to  "
        << targetTemp << "°C\n";
}

void Thermostat::changeMode(string newMode)
{
    if (newMode == "heat" || newMode == "cool" || newMode == "auto")
    {
        mode = newMode;

        cout << "\nMode changed to " << mode << endl;
    }
    else
    {
        cout << "\nInvalid mode!\n";
    }
}

void Thermostat::schedule(string time)
{
    scheduledTime = time;

    cout << "\n Thermostat scheduled at: "
        << scheduledTime << endl;
}

void Thermostat::cancelSchedule()
{
    scheduledTime = "Not Set";

    cout << "\n Schedule cancelled.\n";
}

void Thermostat::showStatus()
{
    cout << "\n========== THERMOSTAT STATUS ==========\n";

    cout << "Device Name        : " << deviceName << endl;

    cout << "Power Status       : "
        << (powerStatus ? "ON" : "OFF") << endl;

    cout << "Current Temp       : "
        << currentTemp<< "°C\n";

    cout << "Target Temp        : "
        << targetTemp << "°C\n";

    cout << "Mode               : " << mode << endl;

    cout << "Schedule           : " << scheduledTime << endl;

    cout << "=======================================\n";
}

Thermostat::~Thermostat()
{
    cout << "\nThermostat Destructor Called.\n";
}