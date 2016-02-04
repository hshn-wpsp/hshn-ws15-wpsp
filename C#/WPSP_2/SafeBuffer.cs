using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Text;
using System.Threading.Tasks;

namespace WPSP_2
{ 
    

    class SafeBuffer : Buffer , IProcessable   {
        

        private int elements;
        private int p;

       


        public SafeBuffer(int i): base(i)
        {
            elements = 0;
        }


        public void ApplyToEach(Processor proc)
        {
            foreach (int da in data)
            {
               proc(da);
            }
        }

        public override void Put(int i)
        {
            if (elements > tail-head)
                throw new BufferOverFlowException("BufferOverFlowException");
            elements++;
            base.Put(i);
            
        }
        public override int Get()
        {
            if (elements < 1)
                throw new BufferUnderFlowExecption("BufferUnderFlowException");
            elements--;
            return base.Get();
        }
    }

    
}
