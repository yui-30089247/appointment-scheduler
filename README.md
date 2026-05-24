# Appointment scheduler
This program allows users to view, add, delete and edit appointments on a calendar.

## Features
- Show calendar with appointments (command line arguments or Qt UI framework)
- View an appointment by specific date
- Add an appointment
- Delete an appointment
- Edit an appointment

## Building
```
cmake -S . -B build
cmake --build build
```

## Running
```
./build/appointment-scheduler
```

## Running Tests
```
ctest --test-dir build --verbose
```

## Author
Yui Dayal - CIS 25 Final Project

## Current Status
- Implemented a feature that allows user to modify an appointment
 
**Implemented Features**:
- Feature 1: Add a new appointment
- Feature 2: Edit an appointment
 
**Stubbed (compile but not implemented)**:
- Feature 2: Search appointment
- Feature 3: View appointment by specific category (date, time, location)
- Feature 4: Delete appointment
 
**Known Issues**:





