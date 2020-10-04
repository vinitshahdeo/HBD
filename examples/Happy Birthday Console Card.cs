using System;

namespace HBD
{
    class Program
    {
        static void Main(string[] args)
        {
            string firstName1 = "John";             //Define first part of first name
            string lastname = "Smith";               //Define last name
            string fullName = firstName1 + " " + lastname;     //Define full name

            //Layout structure for song
            Console.WriteLine("\n\n");
            chorus(2);
            targetLine(firstName1);
            chorus(1);
            //Output
            birthdayCake(firstName1);
            Console.ReadLine();
        }
        public static void chorus (int multiplier)
        {
            for (int i = 0; i < multiplier; i++)
            {
                //Output birthday chorus
                Console.WriteLine("          HAPPY BIRTHDAY TO YOU");
            }
        }
        public static void targetLine(string inputName)
        {
            //Convert all characters to uppercase
            inputName = inputName.ToUpper();
            //Output birthday message
            Console.WriteLine("   HAPPY BIRTHDAY DEAR " + inputName);
        }
        public static void birthdayCake(string inputNameCake)
        {
            //Convert all characters to uppercase
            inputNameCake = inputNameCake.ToUpper();
            //Insert Space between each character
            for (int i = 1; i <= inputNameCake.Length; i += 1)
            {
                inputNameCake = inputNameCake.Insert(i, " ");
                i++;
            }
            //Output
            Console.WriteLine("                  \\\\\\ ,");
            Console.WriteLine("                   \\ `|");
            Console.WriteLine("                    ) (   .-\"\"-.");
            Console.WriteLine("                    | |  /_  {  '.");
            Console.WriteLine("                    | | (/ `\\   } )");
            Console.WriteLine("                    | |  ^/ ^`}   {");
            Console.WriteLine("                    \\  \\ \\=  ( {   )");
            Console.WriteLine("                     \\  \\ '-, {   {{");
            Console.WriteLine("                      \\  \\_.'  ) }  )");
            Console.WriteLine("                       \\.-'   (     (");
            Console.WriteLine("                       /'-.'_. ) (  }");
            Console.WriteLine("                       \\_(    {   _/\\");
            Console.WriteLine("                        ) '--' `-;\\  \\");
            Console.WriteLine("                    _.-'       /  / /");
            Console.WriteLine("             <\\/>_.'         .'  / /");
            Console.WriteLine("         <\\/></\\>/.  '      /<\\// /");
            Console.WriteLine("         </\\>  _ |\\`- _ . -/|<// (");
            Console.WriteLine("      <\\/>    - _- `  _.-'`_/- |  \\");
            Console.WriteLine("      </\\>        -  - -  -     \\\\\\");
            Console.WriteLine("       }`<\\/>                <\\/>`{");
            Console.WriteLine("       { </\\>-<\\/>_<\\/>_<\\/>-</\\> }");
            Console.WriteLine("       }      </\\> </\\> </\\>      {");
            Console.WriteLine("    <\\/>.                         <\\/>");
            Console.WriteLine("    </\\>                          </\\>");
            Console.WriteLine("     {`<\\/>                     <\\/>`}");
            Console.WriteLine("     } </\\>-<\\/>_<\\/>_<\\/>_<\\/>-</\\> {");
            Console.WriteLine("     {      </\\> </\\> </\\> </\\>      }");
            Console.WriteLine("     }                               }");
            Console.WriteLine("     {           H A P P Y           {");
            Console.WriteLine("  <\\/>        B I R T H D A Y        <\\/>");
            Console.WriteLine("  </\\>            " + inputNameCake + "           </\\>");
            Console.WriteLine("    `<\\/>                          <\\/>'");
            Console.WriteLine("     </\\>-<\\/>_<\\/>_<\\/>_<\\/>_<\\/>-</\\>");
            Console.WriteLine("          </\\> </\\> </\\> </\\> </\\>");
        }
    }
}
