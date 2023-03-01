#include <unistd.h>

/**
 *_ putchar - writes the character c to stdout
 *@c: The character to print
 *Return on successn 1.
 *on error, -1 is returned and erron is set appropraitely
 */
int_putchar(char c)
(

     return(write(1,&c, 1));

 }
