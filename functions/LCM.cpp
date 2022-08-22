long long LCM(int n)
{
    long long lcm = 1;
    int i=2;   
    while(i<=n)    {
        if(isPrime[i]){
            int pp = i;
            while (pp * i <= n)
                pp = pp * i;
            lcm *= pp;
        }
        i++;
    }
    return lcm;
}
