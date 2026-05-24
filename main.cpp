#include "Thermostat.h"

int main()
{
    SmartDevice* device;

    Thermostat t1("Room Thermostat");

    device = &t1;

    int choice;
    float temp;
    string mode;
    string time;

    do
    {
        cout << "\n\n===== THERMOSTAT MENU =====\n";
        cout << "1. Turn ON\n";
        cout << "2. Turn OFF\n";
        cout << "3. Set Temperature\n";
        cout << "4. Change Mode \n";
        cout << "5. Schedule\n";
        cout << "6. Cancel Schedule\n";
        cout << "7. Show Status\n";
        cout << "0. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            device->turnOn();
            break;

        case 2:
            device->turnOff();
            break;

        case 3:
            cout << "Enter Temperature: ";
            cin >> temp;
            t1.setTemperature(temp);
            break;

        case 4:
            cout << "Enter Mode (heat/cool/auto): ";
            cin >> mode;
            t1.changeMode(mode);
            break;

        case 5:
            cout << "Enter Schedule Time: ";
            cin >> time;
            t1.schedule(time);
            break;

        case 6:
            t1.cancelSchedule();
            break;

        case 7:
            device->showStatus();
            break;

        case 0:
            cout << "\n Exiting...\n";
            break;

        default:
            cout << "\n Invalid Choice!\n";
        }

    } while (choice != 0);

    return 0;
}