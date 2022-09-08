#include <stdio.h>
#include <unistd.h>
/**
 * main -  prints exactly "and that piece of art is uselful"
 * - Dora korper, 2015-10-19,
 *   followed by a new line tonthe standard error.
 *  Retuen : Always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 59);
	return (1);
}
