using System;

namespace jumping_on_the_clouds
{
    class Program
    {
        static void Main()
        {
            int n = 7;

            int[] arr = { 0, 0, 1, 0, 0, 1, 0 };

            Console.WriteLine(FindJumps(arr));
        }

        private static int FindJumps(int[] c)
        {
            int count = -1;
            for (int i = 0; i < c.Length; i++, count++)
            {
                if (i < c.Length - 2 && c[i + 2] == 0) i++;
            }

            return count;
        }
    }
}
