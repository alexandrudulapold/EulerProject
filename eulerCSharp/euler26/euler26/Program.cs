using System;

namespace euler26
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] arr = {
            ((double)1 / 12),
            ((double)1 / 13),
            ((double)1 / 3),
            ((double)1 / 21)
            };

            Console.WriteLine("{0:F15}", arr[0]);
            string st = arr[0].ToString();
            Console.WriteLine("{0:F15}", arr[0]*1000);
        }
    }
}
