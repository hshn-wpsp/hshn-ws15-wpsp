using System;
using System.Runtime.Serialization;

namespace WPSP_2
{
    [Serializable]
    internal class BufferOverFlowException : Exception
    {
        public BufferOverFlowException()
        {
        }

        public BufferOverFlowException(string message) : base(message)
        {
        }

        public BufferOverFlowException(string message, Exception innerException) : base(message, innerException)
        {
        }

        protected BufferOverFlowException(SerializationInfo info, StreamingContext context) : base(info, context)
        {
        }
    }
}