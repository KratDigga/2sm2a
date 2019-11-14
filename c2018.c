#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"


void getName(struct Name *name)
{
	//First name Input 
	printf("Please enter the contact's first name: ");
	scanf(" %30s[^\n]", name->firstName);
	clearKeyboard();

	//Middle Initial Input
	printf("Do you want to enter a middle initial(s)? (y or n): ");

	int input = yes();

	if (input == 0)
	{
		name->middleInitial[0] = '\0';
	}
	else {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %10[^\n]s", name->middleInitial);

	}// use if statement give option for middle initial
	clearKeyboard();

	// Last name Input
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]s", name->lastName);
}

//////////////////////////////////////////////////////////////////////

void getAddress(struct Address *address)
{
	// Street number Input
	printf("Please enter the contact's street number: ");
	address->streetNumber = getInt();

	// Street nanme Input
	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]s", address->streetName);
	clearKeyboard();

	// Apartment number Input
	printf("Do you want to enter an apartment number? (y or n): ");

	int input = yes();

	if (input == 0)
	{
		address->apartmentNumber = 0;
	}
	else
	{
		printf("Please enter the contact's apartment number: ");
		address->apartmentNumber = getInt();
		//scanf("%d", address->apartmentNumber);
	}

	// Postal code Input
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", address->postalCode);


	// City Input
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]s", address->city); // possible fix
}

//////////////////////////////////////////////////////////////////////////

void getNumbers(struct Numbers *numbers)
{
	printf("Please enter the contact's cell phone number: ");
	scanf("%10s", numbers->cellPhone);

	// Home Phonenumber Input
	printf("Do you want to enter home phone number? (y or n): ");


	int input = yes();

	if (input == 0)
	{

		numbers->homePhone[0] = '\0';

	}
	else {

		printf("Please enter the contact's home phone number: ");
		scanf("%10s", numbers->homePhone);


	}

	// Business Phonenumber Input
	printf(" Do you want to enter business phone number? (y or n): ");


	input = yes();

	if (input == 0)
	{

		numbers->businessPhone[0] = '\0';

	}
	else {

		printf("Please enter the contact's business phone number: ");
		scanf("%10s", numbers->businessPhone);
	}
}

void getContact(struct Contact *contact)
{
	struct Contact  c = { { {0} } };

	getName(&c.name);
	getAddress(&c.address);
	getNumbers(&c.numbers);

	*contact = c;
}
