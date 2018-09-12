#include	<stdio.h>
#include	<stdlib.h>

// - Create an array variable named `numbers`
//   with the following content: `[4, 5, 6, 7]`
// - Print all the elements of `numbers`

int	main()
{
	int	numbers[]	=	{4,	5,	6,	7};
	for	(int	i	=	0;	i	<	sizeof(numbers)	/	sizeof(int);	i++)
	{
		printf("%d\n",	numbers[i]);
	}
	return	0;
}