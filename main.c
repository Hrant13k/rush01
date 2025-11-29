#include "header.h"

int	main(int argc, char **argv)
{	
	char	**clues;

	clues = convert_in_array(argv[1]);

	if (!is_correct_params(argv) || argc != 2)
		print_error();

	else
		rush(clues);
	return (0);
}
