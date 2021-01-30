using System;
using System.Numerics;

namespace euler28
{
    class Program
    {
        static void Main(string[] args)
        {

            
            BigInteger currentNumber = 1;
            BigInteger sum = currentNumber;
            int multiplierOfTwo = 1;

            int spiral = 1001; // changeable
            int iEnd = (int)(spiral / 2) * 4; //  (1001 / 2) * 4 = 2000

            for(int i = 1; i <= iEnd; i++)
            {
                currentNumber += 2 * multiplierOfTwo;

                if(i % 4 == 0)
                {
                    multiplierOfTwo++;
                }

                sum += currentNumber;
                Console.WriteLine(i + " = " + currentNumber + " ======== " + sum);
            }
            

            Console.WriteLine(sum);
        }
    }
}
