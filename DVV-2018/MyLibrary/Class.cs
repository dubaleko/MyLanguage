using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary
{
    public class MyClass
    {
        static public int strlen(string str)
        {
            return str.Length;
        }

        static public string substr(string str, string newstring)
        {
            return String.Concat(str, newstring);
        }

    }
}
