#include <stdio.h>
/*here we will do the best */
int main(void)
{
char letter;
/* Print lowercase alphabet*/
for (letter = 'a'; letter <= 'z'; letter++) {
putchar(letter);
}
/* Print uppercase alphabet*/
for (letter = 'A'; letter <= 'Z'; letter++) {
putchar(letter);
}
putchar('\n');
return (0);
}
