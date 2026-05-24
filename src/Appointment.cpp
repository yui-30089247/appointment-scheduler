#include "Appointment.h"
#include "DateTime.h"
#include "Location.h"
#include <iostream>

using namespace std;

Appointment::Appointment() : title(""), dateTime(DateTime()), location(Location()), memo(Memo()) {}

Appointment::Appointment(int id, string title, DateTime dateTime, Location location, Memo memo)
    : id(id), title(title), dateTime(dateTime), location(location), memo(memo) {}

int Appointment::getID() const {
    return this->id;
} 

string Appointment::getTitle() const {
    return this->title;
};

DateTime Appointment::getDateTime() const {
    return this->dateTime;
};

Location Appointment::getLocation() const {
    return this->location;
};

Memo Appointment::getMemo() const {
    return this->memo;
};

void Appointment::setTitle(string title) {
    this->title = title;
};

void Appointment::setDateTime(DateTime dateTime) {
    this->dateTime = dateTime;
};

void Appointment::setMemo(Memo memo) {
    this->memo = memo;
};

void Appointment::setLocation(Location location) {
    this->location = location;
}