#ifndef CONTACT_H
#define CONTACT_H
#include<stdio.h>

#define MAX_CONTACTS 100

typedef struct Contact
{
    char name[50];
    char phone[20];
    char email[50];
} Contact;

typedef struct 
{
    Contact contacts[MAX_CONTACTS];
    int contactCount;
} AddressBook;

void createContact(AddressBook *addressBook);
int validate_phone(AddressBook *addressBook, char *number, int flag);
int validate_email(AddressBook *addressBook, char *mail, int flag);
void searchContact(AddressBook *addressBook);
void editContact(AddressBook *addressBook);
int contact_search(AddressBook *addressBook, int s_choice, int *found_i);
void deleteContact(AddressBook *addressBook);
void listContacts(AddressBook *addressBook);
void swapContacts(Contact *a, Contact *b);
void initialize(AddressBook *addressBook);
void saveContactsToFile(AddressBook *addressBook);
void saveAndExit(AddressBook *addressBook);

#endif
