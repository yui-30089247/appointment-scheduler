#include "AppointmentManager.h"
#include "Appointment.h"
#include <iostream>

using namespace std;

AppointmentManager::AppointmentManager() {
    this->appointments = {};
};

vector<Appointment> AppointmentManager::getAppointments() const {
    return this->appointments;
};

Appointment AppointmentManager::getAppointmentById(int id) const {
    for (int i = 0; i < this->getNumAppointments(); i++) {
        if (this->appointments[i].getID() == id) {
            return this->appointments[i];
        }
    }
    return Appointment();
}

void AppointmentManager::addAppointment(Appointment appointment) {
    this->appointments.push_back(appointment);
    cout << "--------------------------" << endl;
    cout << "Appointment added!" << endl;
    cout << "Appointment " << appointment.getID() << ": " << endl;
    cout << "Date and Time: " << appointment.getDateTime().toString() << endl;
    cout << "Location: " << appointment.getLocation().getName() << " - " << appointment.getLocation().getAddress() << endl;
    cout << "Memo: " << appointment.getMemo().getDesciption() << endl;
    cout << "--------------------" << endl;
};

void AppointmentManager::displayAppointments() const {
    if (this->getNumAppointments() == 0) return;

    cout << "----- Appointments -----" << endl;

    for (int i = 0; i < this->appointments.size(); i++) {
        Appointment app = this->appointments[i];
        cout << "Appointment " << app.getID() << ": " << endl;
        cout << "Date and Time: " << app.getDateTime().toString() << endl;
        cout << "Location: " << app.getLocation().getName() << " - " << app.getLocation().getAddress() << endl;
        cout << "Memo: " << app.getMemo().getDesciption() << endl;
        cout << "--------------------" << endl;
    }
}; 


void AppointmentManager::deleteAppointment(Appointment appointment) {
    cout << "Not implemented yet" << endl;
    /**
     * TODO:
     * - iterate through all the apointments and find a matching one and delete it from the list.
     */
}

void AppointmentManager::editAppointment(int appointmentId) {
    for (int i = 0; i < this->getNumAppointments(); i++) {
        if (this->appointments[i].getID() == appointmentId) {
            cout << "Editing Appointment: " << this->appointments[i].getTitle() << endl;

            // Prompt user for new details
            string newTitle, newDateTimeStr, newLocationName, newAddress, newDescription;

            cout << "Enter new title (or press Enter to keep current): ";
            cin.ignore();
            getline(cin, newTitle);
            if (!newTitle.empty()) {
                this->appointments[i].setTitle(newTitle);
            }

            cout << "Enter new date and time (YYYY-MM-DD HH:MM) (or press Enter to keep current): ";
            getline(cin, newDateTimeStr);
            if (!newDateTimeStr.empty()) {
                try {
                    DateTime newDateTime(newDateTimeStr);
                    this->appointments[i].setDateTime(newDateTime);
                } catch (const invalid_argument& e) {
                    cout << "Invalid date and time format. Keeping current value." << endl;
                }
            }

            cout << "Enter new location name (or press Enter to keep current): ";
            getline(cin, newLocationName);
            if (!newLocationName.empty()) {
                this->appointments[i].getLocation().setName(newLocationName);
            }

            cout << "Enter new address (or press Enter to keep current): ";
            getline(cin, newAddress);
            if (!newAddress.empty()) {
                this->appointments[i].getLocation().setAddress(newAddress);
            }

            cout << "Enter new memo description (or press Enter to keep current): ";
            getline(cin, newDescription);
            if (!newDescription.empty()) {
                this->appointments[i].getMemo().setDescription(newDescription);
            }

            cout << "Appointment updated successfully!" << endl;

            return;
        }
    }

    // If no appointment with the given ID is found
    cout << "Appointment with ID " << appointmentId << " not found." << endl;
}

void AppointmentManager::displayMenu() {
    cout << "Enter 1 for View Appointment" << endl;
    cout << "Enter 2 for Add Appointment" << endl;
    cout << "Enter 3 for Delete Appointment" << endl;
    cout << "Enter 4 for Edit Appointment" << endl;
    cout << "Enter 5 for Exit" << endl;
}

int AppointmentManager::getNumAppointments() const {
    return this->appointments.size();
}

