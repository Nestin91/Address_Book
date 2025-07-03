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

int main() 
{
    int choice;

    AddressBook addressBook;
	addressBook.contactCount = 0;
    initialize(&addressBook); // Initialize the address book

    do 
    {
		printf("\nAddress Book Menu:\n");
		printf("1. Create contact\n");
		printf("2. Search contact\n");
		printf("3. Edit contact\n");
		printf("4. Delete contact\n");
		printf("5. List all contacts\n");
		printf("6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) 
		{
	    	case 1:
			createContact(&addressBook);
			break;
	    
			case 2:
			searchContact(&addressBook);
			break;
	    
			case 3:
			editContact(&addressBook);
			break;
	    
			case 4:
			deleteContact(&addressBook);
			break;
	    
			case 5:
			listContacts(&addressBook);
			break;
	    
			case 6:
			printf("Saving and Exiting...\n");
			saveAndExit(&addressBook);
			break;
	    
			default:
			printf("Invalid choice. Please try again.\n");
		}
    } while (choice != 6);

    //cleanup(); // Cleanup any resources before exiting
    return 0;
}
