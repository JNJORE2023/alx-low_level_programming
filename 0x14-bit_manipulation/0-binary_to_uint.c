/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary_str: A pointer to a string containing the binary number.
 *
 * Return: The converted unsigned int value, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *binary_str)
{
	int i;
	unsigned int decimal_val = 0;

	if (!binary_str)
		return (0);

	for (i = 0; binary_str[i]; i++)
	{
		if (binary_str[i] < '0' || binary_str[i] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (binary_str[i] - '0');
	}

	return (decimal_val);
}
