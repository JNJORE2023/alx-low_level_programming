/**
 * get_bit - Retrieve  values of a bit at a specific index in a decimal number.
 * @num: The decimal number to search for the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index,
 *or -1 if the index is out of range.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (num >> index) & 1;

	return (bit_value);
}

