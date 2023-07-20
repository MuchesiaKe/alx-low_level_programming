/**
*print_name - function pointer that prints a name
*@name: parameter for the function pointer argument
*@f: function argument
**/

void print_name(char *name, void(*f)(char *))
{
	f(name);
}
