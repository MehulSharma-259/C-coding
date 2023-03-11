# include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("do_while.c","r");
    if(fp==NULL)
    printf("File cannot be opened !!!");

    else
    {
        while(1)
        {
            ch=fgetc(fp);
            if(ch==EOF)
                break;

            else
                printf("%c",ch);
        }
        fclose(fp);
    }

}