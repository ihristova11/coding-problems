using System;

namespace repeated_strings
{
    class Program
    {
        static void Main()
        {
            string s = "abcac";
            long n = 10;
            Console.WriteLine(FindOccurances(s, n));
        }

        private static long FindOccurances(string s, long n)
        {
            long len = s.Length;
            long counter = 0;

            long stringRepetition = n / len;
            long remaining = n % len;

            for (int i = 0; i < len; i++)
            {
                if(s[i] == 'a')
                {
                    counter++;
                }
            }

            counter *= stringRepetition;

            for (int i = 0; i < remaining; i++)
            {
                if(s[i] == 'a')
                {
                    counter++;
                }
            }

            return counter;
        }
    }
}
