# The Wish with a typing effect
# By @naveenrajm7

# Run demo here https://repl.it/repls/MundaneSkeletalOffices

from time import sleep
import sys


def wish_typer(wish, delay):
  for x in wish:
      print(x, end='')
      sys.stdout.flush()
      sleep(delay)

wish = "Happy Birthday!"
delay_in_seconds = 0.1

wish_typer(wish, delay_in_seconds)
