using System;

namespace CourseProject
{
	class DVV2018
	{

		static int xz(string str)
		{
		int p  = ClassLibrary.MyClass.strlen(str);
		return p ;
		}
		static void Main(string[] args)
		{
		int x  = 10;
		int y  = 10;
		string str  = "str";
		string mystr  = "mynewstring";
		bool mb  = false;
		if (x  == y)
		{
		int m  = xz(str);
		Console.WriteLine("string");
		Console.WriteLine(m);
		}
		else
		{
		string nb  = ClassLibrary.MyClass.substr(mystr,str);
		Console.WriteLine(nb);
		}
		int z  = (x  + y) * (x  - y);
		Console.WriteLine(z);
		while (Console.ReadKey().Key != ConsoleKey.Enter) {}
		}
		
	}
}