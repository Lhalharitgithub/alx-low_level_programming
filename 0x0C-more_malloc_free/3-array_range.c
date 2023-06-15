#include <stdlib.h>
#include "main.h"

/**
 * *array_range - createz an array of integerz
 * @min: Minimum range of valuez stored
 * @max: Maximum range of valuez stored and number of elementz
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
