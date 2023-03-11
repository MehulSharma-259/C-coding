#include <stdio.h>
void message();

void main()
{
    
    message();
}
void message()
{
    printf("I am in message\n");
    main();
    printf("Hello\n");}