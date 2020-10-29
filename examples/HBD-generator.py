import pyttsx3

engine = pyttsx3.init(driverName = 'nsss')

print('Just a few questions for you...\n')
name = input('What is the name of the birthday person?\n')
food = input('What is their favorite food?\n')
hobby = input('And what is their favorite thing to do or hobby?\n')
print('Thank you :)\n')
print('...\n')
print('...\n')
print('running HBD generator...\n')
print('...\n')
print('...\n')
print('...\n')

engine.say("Happy birthday to you," + name + '!')
engine.say("I hope that today you do all of the" + hobby + 'that you possibly can!')
engine.say("And that you eat lots and lots of" + food + '!')
engine.runAndWait() 