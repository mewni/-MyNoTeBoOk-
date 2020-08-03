using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Part01
{
    class ConvertValues
    {
        public void KilometerTOmeter()
        {
            int km,m;
            Console.WriteLine("Enter Kilometer Value :");
            km = int.Parse(Console.ReadLine());

            m = km * 1000;

            Console.WriteLine("Meter Value is : " + m);

    

        }
    }
}
