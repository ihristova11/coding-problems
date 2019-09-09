using System;
using System.Collections.Generic;

namespace sock_merchant
{
    class Program
    {
        static void Main()
        {
            int n = 7;

            int[] arr = { 1, 2, 1, 2, 1, 3, 2 };

            var result = FindSocks(n, arr);

            Console.WriteLine(result);
        }

        private static int FindSocks(int n, int[] arr)
        {
            Dictionary<int, int> dict = new Dictionary<int, int>();

            int count = 0;

            for (int i = 0; i < n; i++)
            {
                if (!dict.ContainsKey(arr[i]))
                {
                    dict.Add(arr[i], 1);
                }
                else
                {
                    dict[arr[i]]++;
                }
            }

            foreach (var pair in dict)
            {
                count += pair.Value / 2;
            }

            return count;
        }
    }
}
