# include <stdio.h>
# include <stdlib.h>
void main()
{
    FILE *fo,*fc;
    char cho,chc;
    fo=fopen("Code testing.txt","r");
    if (fo==NULL)
    {
        printf("Original file cannot be opened.");
        exit(1);
    }
    fc=fopen("Code testing copy.txt","w");
    if(fc==NULL)
    {
        printf("Wrinting file cannot be created.");
        exit(2);
    }
    while(1)
    {
        cho=fgetc(fo);
        if(cho==EOF)
        break;

        else
        {
            fputc(cho,fc);
        }
    }
    fclose(fo);
    fclose(fc);

    fc=fopen("Code testing copy.txt","r");
    if(fc==NULL)
    {
        printf("Copy file cannot be opened.");
        exit(3);
    }
    while(1)
    {
        chc=fgetc(fc);
        if(chc==EOF)
        break;
        else
        printf("%c",chc);

    }
    fclose(fc);

}