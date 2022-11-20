#include <stdlib.h>
#include <stdio.h>

/**
*new_user- assigns the parameters of struct
*@name: name variable
*@email: email variable
*@age: age variable
*Return: returns User struct
*/

struct User
{
char *name;
char *email;
int age;
}

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;
	
	(*user).name = name;
	(*user).email = email;
	(user).age = age;
	return user;
}

/**
*main - program entrypoint
*Return: Always (0)
*/

int main(void)
{
	struct *user;

	user = new_user("Foo",  "foo@foo.bar", 98);
	if (user == NULL)
		return (1);
	printf("User  %s created!\n", (*user).name);
	printf("His email is: %s\n", user -> age);
	printf("And he is %d years old\n", user -> age);
	return (0); 
}
