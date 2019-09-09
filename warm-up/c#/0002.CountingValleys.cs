using System;

namespace counting_valleys
{
    class Program
    {
        static void Main()
        {
            int n = 8;
            string s = "UDDDUDUU";

            Console.WriteLine(FindValleys(n, s));
        }

        private static int FindValleys(int n, string s)
        {
            int v = 0; // valleys
            int lvl = 0; // level
            var arr = s.ToCharArray();

            foreach (char c in arr)
            {
                if (c == 'U') ++lvl;
                if (c == 'D') --lvl;

                if (lvl == 0 && c == 'U')
                {
                    ++v;
                }
            }

            return v;
        }
    }
}
