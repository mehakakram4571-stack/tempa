#pragma once
#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "SmartDevice.h"
#include "Schedulable.h"

class Thermostat : public SmartDevice, public Schedulable 
{
private:
    float targetTemp;
    float currentTemp;
    string mode; // heat / cool / auto
    string scheduledTime;

public:
    Thermostat(string name);

    void setTemperature(float temp);
    void changeMode(string newMode);

    // Interface methods
    void schedule(string time) override;
    void cancelSchedule() override;

    // Polymorphism
    void showStatus() override;

    ~Thermostat();
};

#endif