# To be able to run this script you should have installed ruby
# To run it from your console go to the directory where the file is and type:
# ruby happy_birthday.rb

def say_hello_and_wish_them_happy_birthday(your_name, birthday)
  if birthday == Time.now.strftime("%d/%m/%Y")
    puts "Hi #{your_name}, Happy Birthday!!!!!"
  else
    puts "Hi #{your_name}, have a wonderful day :)"
  end
end

your_name = "Ramiro Solis"
birthday = '05/10/2020'

say_hello_and_wish_them_happy_birthday(your_name, birthday)
