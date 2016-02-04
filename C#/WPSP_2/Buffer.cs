using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WPSP_2
{

    class Buffer
    {
        protected int[] data;
        protected int head, tail;
        protected int size;
        private int property;

        public int Property
        {
            get
            {
                return property;
            }
        }

        public  int this[int i]
        {
            
            get {
                return data[i];
            }
            set {
                data[i] = value;
            }
        }

        
        public Buffer(int size)
        {
            this.size = size;
            data = new int[size];
            head = 0;
            tail = 0;
            property = 0;
        }


      
        public virtual void Put(int val)
        {
            data[tail] = val;
            tail = (tail+1)%size;

           
        }
        public virtual int Get()
        {
            
            int temp = data[head];
           
        
            Array.Clear(data, head,1);
            head = (head + 1) % size;
            return temp;
           
        }

        public void getAll()
        {
            foreach (int da in data)
            {
                Console.WriteLine(da);
            }
        }
    }
}
