using System;

namespace HappyBirthday
{
    class Program
    {
        static void Main(string[] args)
        {
            string message = "Mfuu~%Gnwymif~%?.";

            for (int i = 0; i < message.Length; i++)
            {
                Console.Write((char)(message[i] - 5));
            }

        }

    }
}