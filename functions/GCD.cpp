long long gcd_recursive(long long a, long long b)
{
    if (b)
        return gcd_recursive(b, a % b);
    else
        return a;
}
