using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WPSP_2
{

    class Programm
    {
        private static void Print(int val) { 
            Console.WriteLine(val); 
        }
        static void Main(string[] args)
        {
            SafeBuffer temp = new SafeBuffer(4);
            Processor print = new Processor(Print);
            Console.WriteLine("Size: " + temp.Size);
            Console.WriteLine("Start Get Press Enter");
            Console.ReadLine();
            try
            {
                for (int i = 0; i < 10; i++)
                {
                    Console.WriteLine(i);
                    temp.Put(i);

                }

            }
            catch (Exception e)
            {

                Console.WriteLine(e.Message);
            }
            Console.WriteLine();
            Console.WriteLine("Print nach Put");
            Console.WriteLine();
            temp.ApplyToEach(print);
            Console.WriteLine("Start Get Press Enter");
            Console.ReadLine();
            try
            {
                for (int i = 0; i < 10; i++)
                {
                    Console.WriteLine(i);
                    temp.Get();

                }

            }
            catch (Exception e)
            {

                Console.WriteLine(e.Message);
            }
            Console.WriteLine();
            Console.WriteLine("Print nach Get");
            Console.WriteLine();
            temp.ApplyToEach(print);
            Console.WriteLine("Ende");
            Console.ReadLine();
        }
    }
}
