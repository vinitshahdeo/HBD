import webbrowser, time


def hdb(name):
    return (
        "Many many happy returns for the day "
        + name
        + "! Stay tuned, there's a surprise for you :-D"
    )


bday_name = str(input("Hey there sugar, what's your name: "))
print(hdb(bday_name))
time.sleep(3.5)
webbrowser.open("https://www.youtube.com/watch?v=NCzgzO1y7yQ")
