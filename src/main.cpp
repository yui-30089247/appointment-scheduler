#include "DateTime.h"
#include "Location.h"
#include "Memo.h"
#include "Appointment.h"
#include "AppointmentManager.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    int option;
    AppointmentManager appointmentManager = AppointmentManager();

    cout << "Welcome to Appointment scheduler App!" << endl;

    while (true) {
        AppointmentManager::displayMenu();
        cin >> option;

        if (option == 5) {
            cout << "Thank you!" << endl;
            break;
        }
        if (option == 2) {
            string title, dateTimeStr, locationName, address, description;

            cout << "Title of the appointment: ";
            cin.ignore();
            getline(cin, title);
            cout << "Date and time of the appointment (format: YYYY-MM-DD HH:MM): ";
            getline(cin, dateTimeStr);
            cout << "Location of the appointment: ";
            getline(cin, locationName);
            cout << "Address of the appointment: ";
            getline(cin, address);
            cout << "Description of the appointment: ";
            getline(cin, description);

            try {
                DateTime dateTime = DateTime(dateTimeStr);
                Location location = Location(locationName, address);
                Memo memo = Memo(description);
                int numApps = appointmentManager.getNumAppointments();
                Appointment app = Appointment(numApps + 1, title, dateTime, location, memo);
                appointmentManager.addAppointment(app);
            } catch (const invalid_argument &e) {
                cout << "error: " << e.what() << endl;
            }
        } else if (option == 4) {
            int appointmentID;
            cout << "enter the ID of the appointment to modify" << endl;
            cin >> appointmentID;
            appointmentManager.editAppointment(appointmentID);
        } else if (option == 1) {
            appointmentManager.displayAppointments();
        } else {
            return 0;
        }
    } 

    appointmentManager.displayAppointments();

    return 0;
}