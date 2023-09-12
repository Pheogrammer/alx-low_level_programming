/**
* _islower - checks for lowercase character
* @c: The letter to be checked
*
* Return: 1 if the letter is lowercase, otherwise 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
