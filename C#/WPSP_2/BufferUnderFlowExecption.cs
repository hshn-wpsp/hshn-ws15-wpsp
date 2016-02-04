using System;
using System.Runtime.Serialization;

namespace WPSP_2
{
    [Serializable]
    internal class BufferUnderFlowExecption : Exception
    {
        public BufferUnderFlowExecption()
        {
        }

        public BufferUnderFlowExecption(string message) : base(message)
        {
        }

        public BufferUnderFlowExecption(string message, Exception innerException) : base(message, innerException)
        {
        }

        protected BufferUnderFlowExecption(SerializationInfo info, StreamingContext context) : base(info, context)
        {
        }
    }
}