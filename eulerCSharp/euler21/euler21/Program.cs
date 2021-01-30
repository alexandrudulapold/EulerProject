using System;

namespace euler21
{
    class Program
    {
        static int check(int x)
        {
            int sum = 0;

            if (x % 2 == 0)
            {
                for (int i = 1; i < (x / 2) + 1; i++)
                {
                    if (x % i == 0)
                        sum += i;
                }
            }
            else
            {
                for (int i = 1; i < (x / 2) + 1; i += 2)
                {
                    if (x % i == 0)
                        sum += i;
                }
            }


            return sum;
        }

        static void Main(string[] args)
        {
            int sum = 0;

            for (int i = 1; i < 10000; i++)
            {
                if(i == check(check(i)) && i > check(i))
                {
                    sum += i + check(i);
                }
            }
            Console.Write(sum);
        }
    }
}
