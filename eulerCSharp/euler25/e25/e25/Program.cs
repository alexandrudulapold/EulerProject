using System;
using System.Numerics;

namespace e25
{
    class Program
    {
        static void Main(string[] args)
        {
            bool foundNr = false;
            BigInteger nr1 = 1;
            BigInteger nr2 = 1;

            int nrIndex = 2;

            while (!foundNr)
            {
                BigInteger lastNr1 = nr1;
                nr1 += nr2;
                nr2 = lastNr1;

                if (numberLength(nr1) == 1000)
                {
                    foundNr = true;
                }

                    nrIndex++;
            }

            Console.WriteLine(nrIndex);
            Console.WriteLine("\n" + nr1);

        }
        
        // Only for positive integer numbers 
        static int numberLength(BigInteger nr)
        {
            return nr.ToString().Length;
        } 
    }
}
