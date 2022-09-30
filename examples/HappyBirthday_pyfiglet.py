import pyfiglet
import argparse 
  
CLI = argparse.ArgumentParser(description = __doc__,
                              formatter_class = argparse.RawDescriptionHelpFormatter)

CLI.add_argument("--Name", nargs="?", type=str, required=True, help='who are you wishing Happy Birthday to?')
args = CLI.parse_args()

text = pyfiglet.figlet_format("Happy Birthday " + args.Name)
print(text)
