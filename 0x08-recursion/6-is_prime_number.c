/**
*is_prime_number - checks if the number is prime
*@n : number to be checked for prime
*Return: 1 if prime, 0 otherwise
**/

int is_prime_number(int n)
{
	static int i;

	i = 2;
	if (n == 0 || n == 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (n == i)
		return (1);
	n > 0 ? i++ : i--;
	return (is_prime_number(n));
}
