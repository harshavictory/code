/*
Recursion-1 > factorial
prev  |  next  |  chance
Given n of 1 or more, return the factorial of n, which is n * (n-1) * (n-2) ... 1. Compute the result recursively (without loops).


factorial(1) → 1
factorial(2) → 2
factorial(3) → 6
*/

int factorial(int val)
{
    
    if(val == 0 || val == 1)
        return 1;
    
    return val * factorial(val-1);
}

int main()
{
    int n=2;
    std::cout<<"factorial of " << n <<"is: " << factorial(n);
    
    return 0;
}
