# include <string.h>
# include <stdio.h>
void main()
{
    char str[]="I am studying C from a book named Let Us C";
    int len;
    len = strlen("Humpty Dumpty sat on a wall");
    printf("%d",strlen(str));
    printf("\n%d",len);

    char source[43];
    printf("\n%s",strcpy(source,str));
    
    char name[]="My name is Mehul ";
    char surname[]="Sharma";
    printf("\n%s",strcat(name,surname));
    printf("\n%s",name);

    int i;
    i=strcmp("Mehul","Sharma");
    printf("\n%d",i);
}