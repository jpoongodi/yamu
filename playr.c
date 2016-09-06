using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace date
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
            string date = Console.ReadLine();
            string[] split = date.Split('-');
            int mon = int.Parse(split[1]);
            if (mon >= 0 && mon <= 11)
                Console.WriteLine(months[mon - 1]);
            else
                Console.WriteLine("Invalid");
            Console.ReadKey();
        }
    }
}
