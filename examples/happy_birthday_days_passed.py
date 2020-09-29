from datetime import datetime, date
import sys
name = input("Enter your name \n")
dob = input("Enter your date of birth in format DD/MM/YYYY \n")
parsed_dob = datetime.strptime(dob, '%d/%m/%Y')
current_datetime = datetime.now()
if parsed_dob > current_datetime:
    print("Your dob cannot be in future")
    sys.exit()
days_lived = current_datetime - parsed_dob
print("You have lived on this earth for nearly {0} days, and many more to come".format(str(days_lived).split('days')[0]))
days_for_bday = 0
birth_date = date(parsed_dob.year, parsed_dob.month, parsed_dob.day)
current_date = date(current_datetime.year, current_datetime.month, current_datetime.day)

interval = date(current_date.year, birth_date.month, birth_date.day) - current_date
if interval.days == 0:
    print("HAPPY BIRTHDAY <3 {0}, you are now - {1} years old".format(name, current_datetime.year - parsed_dob.year))
elif interval.days > 0:
    print("Brace yourselves, you birthday comes in {} days".format(interval.days))
else:
    interval_next_year = date(current_date.year+1, birth_date.month, birth_date.day) - current_date
    print("Brace yourselves, you birthday comes in {} days".format(interval_next_year.days))
