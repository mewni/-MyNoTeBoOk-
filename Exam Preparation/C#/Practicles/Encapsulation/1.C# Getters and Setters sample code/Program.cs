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