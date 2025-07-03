/*
Name : Nestin Gregorios Sunny

Date : 03.07.2025

Description :
Project 1 - Implement Address-Book using C programing
Functions Demonstrated:
1. Create Contact into the Address Book
2. Search an already existing contact
3. Edit an already existing contact
4. Delete an already existing contact 
5. List all contacts in alphabetical order
6. Save and Exit to .csv file 
*/

#include "contact.h"
// Dummy contact data
static Contact dummyContacts[] = {
    {"John Doe", "1234567890", "john@example.com"},
    {"Alice Smith", "0987654321", "alice@example.com"},
    {"Bob Johnson", "1112223333", "bob@company.com"},
    {"Carol White", "4445556666", "carol@company.com"},
    {"David Brown", "7778889999", "david@example.com"},
    {"Eve Davis", "6665554444", "eve@example.com"},
    {"Frank Miller", "3334445555", "frank@example.com"},
    {"Grace Wilson", "2223334444", "grace@example.com"},
    {"Hannah Clark", "5556667777", "hannah@example.com"},
    {"Ian Lewis", "8889990000", "ian@example.com"}
};

void populateAddressBook(AddressBook* addressBook)
{
    //printf("%zu\n", sizeof(dummyContacts));
    int numDummyContacts = sizeof(dummyContacts) / sizeof(dummyContacts[0]);
    for (int i = 0; i < numDummyContacts; i++) {
        addressBook->contacts[addressBook->contactCount++] = dummyContacts[i];
    }
}