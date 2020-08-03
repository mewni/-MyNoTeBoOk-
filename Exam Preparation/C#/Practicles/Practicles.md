# Practicle-No2

### Q1.

* Task 1. Create a C# Console application to covert user given Kilo Meter(Km) Value to Meter (m) value. Take a separate Class call “ConvertValues” and inside the class create a method call kilometerTOmeter. (No return type No Parameter Method). And display the answer within the method. Then create an object in main Class (program class) and call the method.

* Task 2. Modify the same user defined method to method which accept a parameter value. That parameter value is the user given Km value. (No return type with parameter method). Display the answer by using the class object.

* Task 3. Modify the same user defined method to method which accept a parameter and return the answer at the end of the method. You should return the calculated Meter value at the end of the method. (With return type with parameter method). Display the answer by using class object.

### Q1-Answers:
### Task 1:

*ConvertValues.cs*

```C#
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task1
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
```

*Program.cs*

```C#
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task1
{
    class Program
    {
        static void Main(string[] args)
        {
            ConvertValues cv = new ConvertValues();
            cv.KilometerTOmeter();

            Console.ReadLine();
        }
    }
}
```

