#include "main.h"
/**
* enter_cmd - prints $ to let user know the program is
* ready to take their input
* prints the prompt if the shell is in interactive mode
* Return: no return
*/
void enter_cmd(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		high.interactive_mod = 1;
	if (high.interactive_mod)
		write(STDERR_FILENO, "$ ", 2);
}
