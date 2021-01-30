using System;

namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            int f1 = 1, f2 = 1, temp, sum=0;

            while(f2<4000000)
            {
                temp = f2;
                f2 += f1;
                f1 = temp;

                if(f2%2==0) { sum += f2; }

            }

            Console.WriteLine(sum);


        }
    }
}
