using System;
using static System.Console;
using System.IO;
using System.Linq;

namespace euler22
{
    class Program
    {
        static void Main(string[] args)
        {
            string strtxt = "";

            using (StreamReader sr = File.OpenText(@"D:\programare\CSharp_vs\euler\euler22\names.txt"))
            {
                string tempstrtxt = "";

                while ((tempstrtxt = sr.ReadLine()) != null)
                { strtxt = tempstrtxt; }

            }


            
            string[] names = strtxt.Split
                ('"', ',', ' ');

            // strArr = strArr unde nu este Null sau Empty valoare
            names = names.Where(x => !string.IsNullOrEmpty(x)).ToArray();

            // sortare alfabetica
            Array.Sort(names);

            int sumtot = 0;

            int i = 1;
            foreach(var name in names)
            {
                sumtot += (i * namesum(name));

                i++;
            }

            Write(sumtot);
            //foreach (var name in names) { WriteLine(name); }
        }

        private static int namesum(string name)
        {
            int sum = 0;

            for (int i = 0; i < name.Length; i++)
            {
                sum += Convert.ToInt32(name[i]) - 64;
            }
            return sum;
        }
    }
}
