int fact(int a)
{
    int f;
    if(a==1)
        return 1;
    else 
        f=a*fact(a-1);

    return (f);
}