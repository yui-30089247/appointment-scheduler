# Implementation Plan

## Feature 1: Add New Appointment - Done
**Trigger**: User selects "Create new appointment" from main menu. 
Prompts user for an appointment date, time, location and memo. 
Create an Appointment object and adds it to the Appointment array (vector).
Display the information about the Appointment added.  

## Feature 2: View Appointments - Stubbed 
**Trigger**: None. By default, it shows up to 5 upcoming appointments with the information
(date, time, location and memo). It will be displayed above the menu. In the future, I want to implement such that user can select how many appointments user wants to see by default. 

## Feature 3: Edit an Appointment - Stubbed
**Trigger**: User selects "Edit an Appointment" from main menu
Prompts user which appointment to edit and user make changes. 
Update the information to the Appointment array (vector)

## Feature 4: Delete an Appointment - Stubbed
**Trigger**: User selects "Delete an Appointment" from main menu
Prompts user which appointment to delete. Look through the array and delete the matching entry. 

## Feature 5: Search an Appointment - Stubbed
**Trigger**: User selects "Search an Appointment" from main menu
Prompts user for search criteria, such as by date, time, search or location. 
Based on the user's output, loop through all the appointments and display the matching ones. 
If there is no mathching one, it displays "Not found". 