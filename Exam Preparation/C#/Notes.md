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
*Output:*
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
*Output:*
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

*Output:*
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
*Output:*
```
Enter Your Age :
20
Your age is 20
```
# Operators
C# has rich set of build in operators and provides the following type of operators
* Arithmetic Operators
* Relational Operators
* Logical Operators
* Assignment Operators

### Arithmetic Operators
* +, -, *, /, %, ++, --

### Relational Operators
* ==, !=, >, <, >=, <=

### Logical Operators
* &&, ||, !

# C# Loops
### Types of Loops
* while loop
* for loop
* do while loop
* nested loops

### C# Loop Control Statements
 * Break Statement =>
   *Syntax
      break;

* Continue Statement =>
   *Syntax
      continue; 

# C# Access Specifiers / Modifiers

 * Public => The type or a member can be accessed by any other code in the same assembly or another assembly that references it.

 * Private => The type or member can be accessed only by code in the same class or struct

 * Protected => The type or member can be accessed only by code in the same class, or in a class that is derived from that class.

 # C# Class

 * In Object Oriented  Programming, a class is a blue print for creating objects(a particular data structure), providing initial values for state(member variables or attributes), and implementations of behaviors(member function or methods)

 ![C# Class](/images/c-sharp-class.png)

## How to create/ add a class file in Visual Studio IDE
1. Right click on your project file in solution explorer.
2. Click on add, New item

![Step1,2](/images/vs-img1.png)

3. From the selection window you have to select C# Class file
4. Rename the class file with .cs extension

![Step3,4](/images/vs-img2.png)

* Ex => MyClass.cs
* Note => A class name can be anything but not a reserved word & not allowed to keep spaces in class name.

So, after that you can see this newly built C# Class

![C#-Class](/images/vs-img3.png)

* A Class definition starts with the keyword class followed by the class name. And the class body enclosed with pair of curly brackets.

## Accessing the addes class from another class

* When you create a C# console application program the main method of the project is existing in program.cs class also known as the main class.

* When you run the program compiler is looking at the instruction inside the main method.

* If you have added a new class file to your project you need to call your added class from main method.

* To do that in OOP languages we are using something call class object also known as an object.

## How to create an object

*Class Name Object_Name = new Class Name();

## Accesing the added class from another class: Example

* Assume that user have created a C# console app and add a class to the same project call MyClass.

* Inside MyClass class there is a function(method) call Hello() as well.(No return type no parameter function)

*MyClass.cs*

```C#
using System;

public class MyClass
{
	public void Hello()
	{
		Console.WriteLine("Say Hello");
	}
}
```
*Program.cs*

```C# 
using System;

namespace Exam_Preparation 
{
    class Program
    {
        static void Main(string[] args)
        {
            MyClass obj = new MyClass();
            obj.Hello();

            Console.WriteLine();

        }
    }
}
```
*Output:*

```
Say Hello
```


 