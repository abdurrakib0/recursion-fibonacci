// fibonacci series
// 0 1 1 2 3 5 8
// 0 1 2 3 4
#include <stdio.h>
#include <cs50.h>

int fibonacci(int k);

int main()
{
    int n;
    n = get_int("give me a range: ");

    for(int i = 0; i <= n; i++)
    {
        printf("%i ", fibonacci(i)); //prints fibonacci number one by one
    }
}

//fibonacci function
int fibonacci(int k)
{
    if(k == 0) return 0;
    else if(k == 1) return 1;
    else return fibonacci(k - 1) + fibonacci(k - 2);

}
