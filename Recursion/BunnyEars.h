/*
Recursion-1 > bunnyEars
prev  |  next  |  chance
We have a number of bunnies and each bunny has two big floppy ears. We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).


bunnyEars(0) → 0
bunnyEars(1) → 2
bunnyEars(2) → 4
*/

int bunnyEars(int bunnies)
{
    if(bunnies == 0)
    {
        return 0;
    }
    return 2 + bunnyEars(bunnies -1);
}

int main()
{
    int n=2;
    std::cout<<"Total bunny ears are "<< bunnyEars(n);
    
    return 0;
}
