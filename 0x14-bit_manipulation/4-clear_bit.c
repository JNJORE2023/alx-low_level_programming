/**
 * clear_bit - Sets the value of a given bit to 0.
 * @num: A pointer to the number to change.
 * @index: The index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num = (~(1UL << index) & *num);
	return (1);
}
