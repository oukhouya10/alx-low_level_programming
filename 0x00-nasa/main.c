#include "head.h"

/*
* main - the principal function
* @argc: counting the arguments
* @argv: arguments vector
* Return: always 0
*/
int main(int argc, char **argv)
{
    char *line = NULL;
   /* char command = NULL;*/
    int status = 0;
    (void) argc;
    (void) argv;

    while (1)
    {
        line = read_line();
        if (line == NULL)  /*ctrl +d */
            return (status);
        printf("%s", line);
        free(line);	

       /*command = tokenizer(line);

        status = _execute(command, argv);*/

    }
    
}
