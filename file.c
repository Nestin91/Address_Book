#include <stdio.h>
#include "file.h"

void saveContactsToFile(AddressBook *addressBook) 
{
  FILE *fp;
  int i;
  //open file in write mode
  fp = fopen("addressbook.csv", "w");
  fprintf(fp, "#%d\n", addressBook -> contactCount);
  //store contacts into file
  for (i = 0; i < addressBook -> contactCount; i++)
  {
    fprintf(fp,"%s,%s,%s\n", addressBook -> contacts[i].name,addressBook -> contacts[i].phone, addressBook -> contacts[i].email);
  }

  //closing file
  fclose(fp);
}

void loadContactsFromFile(AddressBook *addressBook) 
{
  FILE *fp; 
  int i; 
  //open file in read mode
  fp = fopen("addressbook.csv", "r");
  fscanf(fp, "#%d\n", &addressBook -> contactCount);
  //read contacts from file
  for (i = 0; i < addressBook -> contactCount; i++)
  {
    fscanf(fp, " %[^,], %[^,], %[^\n]\n", addressBook -> contacts[i].name, addressBook -> contacts[i].phone, addressBook -> contacts[i].email); 
  }

  //closing file
  fclose(fp);
}
