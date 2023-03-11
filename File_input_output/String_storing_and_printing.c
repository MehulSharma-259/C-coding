# include <stdio.h>
# include <string.h>
# include <stdlib.h>
void main()
{
    FILE *fp;
    char chu,string[100];
    fp=fopen("User created file.txt","w");
    if(fp==NULL)
    {
        printf("File cannot be created.");
        exit(1);
    }
    printf("Enter some text to be stored in file:\n");
    while(strlen(gets(string))>0)
    {
        fputs(string,fp);
        fputs("\n",fp);
    }
    fclose(fp);

    fp=fopen("User created file.txt","r");
    if(fp==NULL)
    {
        printf("Reading cannot be done file is not opening.");
        exit(2);
    }
    while(fgets(string,99,fp)!=NULL)
    {
        printf("%s",string);
    }
    fclose(fp);
}