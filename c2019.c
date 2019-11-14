#include <stdio.h>
#include "contacts.h"
char option[2] = { '\0' };

// Contact Information

/*This function will gather all the information that will be stored in struct Name and used by struct name of the Contact struct. It will do so by prompting the user to input their first name, middle intial and lastname */
void getName(struct Name *name){
	printf("Please enter the contact's first name: ");
	  scanf(" %30[^\n]s", name->firstName);
		  printf("Do you want to enter a middle initial(s)? (y or n): ");
		    scanf("%1s", option);
		      if ((option[0] == 'n') || (option[0] == 'N')) {
			      name->middleInitial[0] = '\0';
		      } 
              else {
			      printf("Please enter the contact's middle initial(s): ");
			      scanf(" %10[^\n]s", name->middleInitial);
              }// use if else statement to give a option for middle initial
	        printf("Please enter the contact's last name: ");
		      scanf(" %35[^\n]s", name->lastName);
}

/*This function will gather all the information that will be stored in struct Address and used by struct address of the Contact struct. It will do so by prompting the user to input their street #, street name and/or apartment number*/
void getAddress(struct Address *address) {
  printf("Please enter the contact's street number: ");
  scanf("%d", &address->streetNumber);
	  printf("Please enter the contact's street name: ");
	  scanf(" %40[^\n]s", address->streetName);
     printf("Do you want to enter an apartment number? (y or n): ");
		 scanf(" %1c", option);
		    if ((option[0] == 'n') || (option[0] == 'N')) {
			    address->streetName[0] = -1;
		    }
            else {
			        printf("Please enter the contact's apartment number: ");
	  	        scanf("%d", &address->apartmentNumber);
	    	    }
	               printf("Please enter the contact's postal code: ");
	               scanf(" %7[^\n]s", address->postalCode);
                  printf("Please enter the contact's city: ");
	                scanf(" %40[^\n]s", address->city);
}

/*This function will gather all the information that will be stored in struct Number and used by struct number of the Contact struct. It will do so by prompting the user to choose if they want to input their cellphone number, home phone number and/or business phone number*/
void getNumbers(struct Numbers *numbers) {
  	printf("Do you want to enter a cell phone number? (y or n): ");
		scanf("%1s", option);
		  if ((option[0] == 'n') || (option[0] == 'N')) {
			  numbers->cellPhone[0] = '\0';
	  	} else {
			    printf("Please enter the contact's cell phone number: ");
			    scanf("%10s", numbers->cellPhone);
	    	}
        		printf("Do you want to enter a home phone number? (y or n): ");
		        scanf("%1s", option);

          		if ((option[0] == 'n') || (option[0] == 'N')) {
		      	    numbers->homePhone[0] = '\0';
		          } 
                  else {
			              printf("Please enter the contact's home phone number: ");
		      	        scanf("%10s", numbers->homePhone);
	            	  }
        		     printf("Do you want to enter a business phone number? (y or n): ");
		            scanf("%1s", option);
		          if ((option[0] == 'n') || (option[0] == 'N')) {
             numbers->businessPhone[0] = '\0';
              } 
           else {
			    printf("Please enter the contact's business phone number: ");
			    scanf("%10s", numbers->businessPhone);
			printf("\n");
	      }
}
