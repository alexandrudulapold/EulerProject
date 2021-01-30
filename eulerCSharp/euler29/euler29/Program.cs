using System;
using System.Numerics;
using System.Collections.Generic;
using System.Linq;

namespace euler29
{
    class Program
    {
        static void Main(string[] args)
        {

            List<BigInteger> results = new List<BigInteger>();

            for(int a = 2; a <= 100; a++)
            {
                for (int b = 2; b <= 100; b++)
                {
                    BigInteger result = BigInteger.Pow(a, b);

                    results.Add(result);
                }
            }

            results = results.Distinct().ToList();

            Console.WriteLine(results.Count());

        }
    }
}
