using System;
using System.ComponentModel.DataAnnotations;
using System.Data;

namespace _3
{
    class functions
    {
        public bool prime(int nr)
        {
            for (int i = 3; i < Convert.ToInt32(Math.Sqrt(nr)) + 1; i += 2)
            {
                if (nr % i == 0) return false;
            }
            return true;
        }
    }



    class Program
    {

        static void Main(string[] args)
        {
            functions F = new functions();
            int max = -1;
            for (int i = 1; i < Convert.ToInt32(Math.Sqrt(600851475143) + 1); i+=2)
            {
                if (F.prime(i) == true && 600851475143 % i == 0) { max = i; }
            }

            Console.WriteLine(max);

        }
    }
}
