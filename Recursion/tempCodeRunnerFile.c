int n)
{   
    if (n<=2) return n;

    return stair_case(n-1) + stair_case(n-2);
}