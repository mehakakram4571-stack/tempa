#pragma once
#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <iostream>
using namespace std;

class SmartDevice
{
protected:
    string deviceName;
    bool powerStatus;

public:
    SmartDevice(string name);

    virtual void turnOn();
    virtual void turnOff();

    virtual void showStatus() = 0; // pure virtual 

    virtual ~SmartDevice(); 
};

#endif