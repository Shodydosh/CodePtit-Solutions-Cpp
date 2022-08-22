#define MAX 10001
 
vector<bool> isPrime (MAX, true);
void sieve()
{
     
    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i] == true)
            for (int j = i*i; j<= MAX; j+=i)
                isPrime[j] = false;
    }
}
