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
#Object Oriented Programming - Encapsulation

## Acess Specifiers [Acess Modifiers]

* Encapsulation is implementes by using access specifiers

* An access specifier defines the scope and visibility of a class memeber

* C# supports the following access specifiers
 - Public
 - Private
 - Protected
 - Internal
 - Protected Internal

### Public Access Specifiers

* Public access specifier allows a class to expose its member variables and member functions to other functions and objects.

* Any public member can be accessed from outside the class.

### Private access Specifiers

* Private access specifiers allows a class to hide its member variable and member functions from other functions and objects.

* Only functions of the same class can access its private member.

## Encapsulation
* Encapsulatio is one of the fundemaentals in OOP cocepts.

* Encapsulation is the technique of making the feilds in a class private and providing access to the feilds via public methods.

* If a feild is declared private, it cannot be accessed by anyone outside the class, there by hiding the feilds within the class.

* For this reason, encapsulation is also refered to as *Data Hiding*.

## C# GET SET Accessors / Getters and Setters

* The get set accessors or modifiers mostly used for sorting and retrieving value from the private feild.

*C# Getters and Setters sample code*
*Encapclass.cs*

```C#

namespace ConsoleApp1
{
    class EncapClass
    {
        private int age;
        private string name;

        public void setAge(int ageFromUser)
        {
            age = ageFromUser;
        }
        public int getAge()
        {
            return age;
        }

        public void setName(string nameFromUser)
        {
            name = nameFromUser;
        }
        public string getName()
        {
            return name;
        }
    }
}

```

*Program.cs*

```C#

namespace ConsoleApp1
{
    class Program 
    {
        static void Main(string[] args)
        {
            EncapClass ec = new EncapClass();
            ec.setAge(25);
            Console.WriteLine("Your Age is "+ ec.getAge());
            Console.ReadLine();
        }
    } 
}

```
Q1. Write a complete C# code to declare two private integer variables to accept user inputs and display the sum of those two variables.
Hint - Take a seperate class which contain get and set methods.

*program.cs*

```C#

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {

        }
    }
}

```

*sum.cs*

```C#

namespace ConsoleApp2
{
    class sum 
    {
        private int num1, num2;

        public void setNum1(int number1)
        {
            num1 = number1;
        }
        public int getNum1()
        {
            return num1;
        }

        public void getNum2(int number2)
        {
            num2 = number2;
        }
        public int getNum2()
        {
            return num2;
        }
    }
}

```
# Inheritance

Task1(Encapsulation)
* Create a console application with a encapsulated class. 
* Inside the class create an private variable to store the user’s age.
* Create getters and setters set user’s age and check whether the user is eligible for voting or not.
* From main class program should take user’s age as a input.


*EncapClass.cs*

```C#

namespace EncapTask1
{
    class EncapClass
    {
        private int age;

        public void setAge(int newage)
        {
            age = newage;
        }
        public int getAge()
        {
            return age;
        }
    }
}

```

*Program.cs*

```C#

namespace EncapTask1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter user's age: ");
            int userage = int.Parse(Console.ReadLine());

            EncapClass enc = new enc EncapClass();
            ec.SetAge(userage);

            if(ec.getAge() >= 18)
            {
                Console.WriteLine("You are eligible for voting");
            }
            else
            {
                Console.WriteLine("You are not eligible for voting");
            }

            Console.ReadKey();
        }
    }
}

```
Task2
* Is it possible to access protected variables from other classes which are not derived from the class which has the variable?
* Explain your answer.

## Inheritence 

* This allows us to define a class in terms of another class, which makes it easier to create and maintain an application

* And also provides an opportunity to reuse the code functionality ans speed up implementation time.

## Inheritence Cont.

* When creating a class, instead of writing completely new sata member functions, the programmer can designate that the new class should inherit in the members of an existing class.

* The existing class is called the *base* class(Parent), and the new class is referred to as the *derived* class(Child).

## Initialization of Base class and derived class

* Any class can be a base class

* There is no dedicated rule for creating base class.

* When creating a child class you can simply inherit base class followed by *colon(:)* symbol.

## Initialization of Base class and derived class syntax

```C#

<acess-specifier> class <base_class>{
    .............
}
class <derived_class> : <base_class> {

}

```
## Example

*Tyre.cs*
```C#

namespace Inheritence 
{
    class Tyre
    {
        public int tyresize = 35;
        protected void Tyretype()
        {
            Console.WriteLine("This is a Tubeless Tyre ");
        }
    }
}

```
*Scooter.cs*
```C#




```
## Inheritence - Task01
Q1
Is it possible to access a private variable which declared inside base class from child class? Explain your answer.

## Task02

* Create a C# Console application.

* Add two classes call ‘Faculty’  and ‘DegreeProgram’.

* Make ‘DegreeProgram’ as the derived class (Child Class).

* Inside ‘Faculty’ class create an integer variable call ‘student’ and assign value 100.

* Inside the ‘DegreeProgram’ class create a void method call ‘Details’ and print the ‘student’ variable.

* Call the method ‘Details’ inside main method via a class object.

*Faculty.cs*
```C#




```

 