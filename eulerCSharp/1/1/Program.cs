using System;

namespace _1
{
    class Program
    {
        static void Main(string[] args)
        {
            int c = 0;

            for(int i=1; i<1000; i++)
            {
                if(i%3==0 || i%5==0) { c+=i; }
            }

            Console.WriteLine(c);

        }
    }
}
