using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WPSP_2
{
    delegate void Processor(int val);

    interface IProcessable
    {
        void ApplyToEach(Processor proc);
    }
}
