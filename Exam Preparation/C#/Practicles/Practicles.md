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

# Practicle-No3
## Q1

Create a class called “Employee” which has 3 private variables (empID, empName, empDesignation) and create getters and setters for each field. Please note that this has no main method since this is just an added class to the console application. Inside the main class take user inputs for employee id , employee name. employee designation and pass values to added class and set values.
From getters return relevant values and print the following message from main method.

 “Hello – Employee name – Your Employee ID is – EMPID—and You are a – EmpDesignation --.


## Answer

*Employee.cs*

```C#

namespace Encap01
{
    class Employee
    {
        private int empID;
        private String empName;
        private String empDesignation;

        public void setEmpID(int id)
        {
            this.empID = id;
        }
        public int getEmpID
        {
            return empID;
        }

        public void setEmpName(String name)
        {
            this.empName= name;
        }
        public String getEmpName()
        {
            return empName;
        }

        public void setEmpDesignathon(String designathon)
        {
            this.empDesignathon = designathon;
        }
        public String getEmpDesignathon()
        {
            return empDesignathon;
        }
    }
}

```

``` C#
namespace Encap01
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the Employee ID: ");
            int employeeID = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter the Employee Name: ");
            String employeeName = Console.ReadLine();

            Console.WriteLine("Enter the Employee Designathon: ");
            String employeeDesignathon = Console.ReadLine();

            Employee em1 = new Employee();

            em1.setEmpID(employeeID);  
            em1.setEmpName(employeeName);
            em1.setEmpDesignathon(employeeDesignathon);

            Console.WriteLine("Hello - " +em1.getEmpID() + "- your Employee Name is - " + em1.getEmpName() + " - and you are - " + em1.getEmpDesignathon());

            Console.ReadKey();
        }
    }
}


```
## Q2
Create a Console application program which contain an encapsulation class for four basic arithmetic operations.
Inside the encapsulation class you should have two private variables and getters and setters for basic arithmetic operations. Then return answers for summation, subtraction, multiplication and division and print them on main method.

## Answer

*Calculations.cs*

```C#
namespace Encap02
{
    class Calculations
    {
        private int num1;
        private int num2;

        public void setValues(int n1, int n2)
        {
            this.num1 = n1;
            this.num2 = n2;
        }
        
        public int getSummation()
        {
            return num1+num2;
        }
        public int getSubstraction()
        {
            return num1-num2;
        }
        public int getMultiplication()
        {
            return num1*num2;
        }
        public double getDivision()
        {
            return (double) num1 / (double) num2;
        }
    }
}

```

*Program.cs*

```C#

namespace Encap2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number 1: ");
            int number1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter number 2: ");
            int number2 = int.Parse(Console.ReadLine());

            Calculations cal = new Calculations();

            Console.WriteLine("Summation : " + cal.getSummation());
            Console.WriteLine("Substraction : " + cal.getSubstraction());
            Console.WriteLine("Multiplication : " + cal.getMultiplication());
            Console.WriteLine("Division : " + cal.getDivision());

            Console.ReadKey();  //holds your program until the user enter any key (stops the execution)
        }
    }
}

```


