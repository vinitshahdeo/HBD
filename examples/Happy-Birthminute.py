import datetime
current_year = datetime.datetime.now().year

birth_year = int(input("Hello, human! I hear that today is your birthday! Please enter the year in which you were born: "))

min = (current_year - birth_year) * 525600
print("\n\nWow, you are a whopping " + str(min) + " minutes old today! Congratulations!")
