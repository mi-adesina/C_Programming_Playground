#include <stdio.h>

/**
 * main - This is the entry point of the program.
 *
 * Description: I was curious about stutures as a datatype even I learnt
 * about then and decided to pay around it. It was stressful but fun.
 *
 * Return: 0 (always success)
 */
int main(void)
{

	/**
	 * struct my_details - This stores the details of a user.
	 * @first_name: Stores user's first name
	 * @middle_name: Stores user's middle name
	 * @last_name: Stores user's last name
	 *
	 * Description: I intented to store user user data in the best
	 * possible way so as to use and reuse them. I created some datatypes.
	 * However, I can't a structure under a different structure yet, so I
	 * commented the address out. I hope to do greater things soon. I 
	 * can't stop, and I won't stop.
	 */
	struct my_details
	{
		char first_name[32];
		char middle_name[32];
		char last_name[32];
		/*struct address addr;*/
	};

	struct my_details michael;

	/* assigning values to names */
	char name1[] = "Michael";
	char name2[] = "Ifeoluwa";
	char name3[] = "Adesina";

	for (int i = 0; name1[i] != '\0'; ++i)
	{
		michael.first_name[i] = name1[i];
	}

	for (int i = 0; name1[i] != '\0'; ++i)
	{
		michael.middle_name[i] = name2[i];
	}

	for (int i = 0; name1[i] != '\0'; ++i)
	{
		michael.last_name[i] = name3[i];
	}

	printf("My first name is: %s \n", michael.first_name);
	printf("My middle name is: %s \n", michael.middle_name);
	printf("My last name is: %s \n", michael.last_name);

	return (0);
}
