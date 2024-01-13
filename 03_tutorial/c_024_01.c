int power(x, n)
int x, n;
{
    int i, p;
    for (p = 1; n > 0; --n)
        p = p * x;

    return (p);
}
