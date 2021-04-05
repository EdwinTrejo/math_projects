using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GuessTheNumberGame
{
    class Program
    {
        static Random rnd = new Random();

        public static int RandomNumber()
        {
            int NewNumber = rnd.Next(9) + 1;
            return NewNumber;
        }

        static void Main(string[] args)
        {
            int actualNumber, guess;
            Console.WriteLine("Please enter a number in between 1 and 9: \n");
            char gameEnd = 'y';
            actualNumber = RandomNumber();
            Console.Write(actualNumber);
            guess = Convert.ToInt32(Console.ReadLine());

            do
            {
                while (guess != actualNumber)
                {
                    Console.Write(guess);
                    guess = Convert.ToInt32(Console.ReadLine());

                    if (guess == actualNumber)
                        gameEnd = Console.ReadKey().KeyChar;
                    else
                        Console.WriteLine("Try Again!");
                }
                Console.WriteLine("Want to play Again? Y/N");
            } while (gameEnd == 'y');
        }
    }
}
