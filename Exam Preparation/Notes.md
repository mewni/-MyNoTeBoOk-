```C#
using System;

namespace Exam_Preparation // All namespace names in your project are based on a root namespace.It's your project name.A namespace is a collection of classes.
{
    class Program
    {
        static void Main(string[] args)
        {
            // Main Method
            Console.WriteLine("Hello World!");  // Display on Console Application
            Console.Write("Hello World!");

            Console.ReadLine();  // Or you can use Console.ReadKey(). This avoid Closing the Console Suddenly.
        }
    }
}
```
#### Displaying Variables on Console Applications

```C#
using System;

namespace Exam_Preparation // All namespace names in your project are based on a root namespace.It's your project name.A namespace is a collection of classes.
{
    class Program
    {
        static void Main(string[] args)
        {
            int age = 24;  // Store numbers without decimal points

            Console.WriteLine("" + age);
            Console.WriteLine("Your age is " + age);
            Console.ReadLine();
        }
    }
}
```
##### Output:
```
24
Your age is 24
```

#### Getting String Input from User

```C#
using System;

namespace Exam_Preparation // All namespace names in your project are based on a root namespace.It's your project name.A namespace is a collection of classes.
{
    class Program
    {
        static void Main(string[] args)
        {
            string name;  // Declaring a string variable to store the value

            Console.WriteLine("Enter Your Name :");
            name = Console.ReadLine();  //Taking user input to the variable

            Console.WriteLine("Welcome " + name);  // Displaying the variable

            Console.ReadLine();  // Avoid closing the console
        }
    }
}
```
##### Output:
```
Enter Your Name :
Tim
Welcome Tim
```

##### Getting integer Input from the User(I) (Cast using int.Parse)

```C#
using System;

namespace Exam_Preparation // All namespace names in your project are based on a root namespace.It's your project name.A namespace is a collection of classes.
{
    class Program
    {
        static void Main(string[] args)
        {
            int age;  // Declaring a integer variable to store the value

            Console.WriteLine("Enter Your Age: ");
            age = int.Parse(Console.ReadLine());  // Taking user input while converting it into an integer value(Casting)

            Console.WriteLine("Your age is : " + age);  // Displaying the variable

            Console.ReadLine();  // Avoid closing the console
        }
    }
}
```

##### Output:
```
Enter Your Age:
20
Your age is : 20
```
#### Getting integer Input from User (II) (Cast using Convert.ToInt32)

```C#
using System;

namespace Exam_Preparation // All namespace names in your project are based on a root namespace.It's your project name.A namespace is a collection of classes.
{
    class Program
    {
        static void Main(string[] args)
        {
            int age;  // Declaring  a integer variable to store the value

            Console.WriteLine("Enter Your Age :");
            age = Convert.ToInt32(Console.ReadLine());  // Taking user input to the variable

            Console.WriteLine("Your age is " + age);  // Displaying the variable

            Console.ReadLine();  // Avoid closing the console
        }
    }
}
```
##### Output:
```
Enter Your Age :
20
Your age is 20
```
