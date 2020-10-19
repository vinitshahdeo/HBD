from tkinter import *
import tkinter.font as font
import sys

class start_window(Frame):
    def __init__(self,parent=None):
        Frame.__init__(self,parent)
        Frame.pack(self)


root1=Tk()
root1.configure(background='thistle1')
root1.title('All about you :)')
root1.geometry('400x400')
hbd1=start_window(root1)

myFont=font.Font(size=12,family='Georgia')

def delete():
    print('Bye <3')
    sys.exit()

def hbd3():
    root3=Tk()
    root3.configure(background='PaleTurquoise1')
    root3.title('Blow out your candles!')
    root3.geometry('500x600')
    hbd3=start_window(root3)
    Label(hbd3,text='...and have a great day!',bg='PaleTurquoise1',font=('Georgia',15)).pack(side=TOP,expand=YES,fill=BOTH,anchor=CENTER)
    photo2=PhotoImage(master=hbd3,file='hbddog.png')
    Button(hbd3,image=photo2,command=delete).pack(side=BOTTOM,expand=YES,fill=BOTH,anchor=CENTER)
    root3.mainloop()
    sys.exit()

def hbd2():
    root2=Tk()
    root2.configure(background='green yellow')
    root2.title('A little love from an internet stranger!')
    root2.geometry('500x600')
    hbd2=start_window(root2)
    Label(hbd2,text='Make a wish!!!',bg='green yellow',font=('Georgia',15)).pack(side=TOP,expand=YES,fill=BOTH,anchor=CENTER)
    photo=PhotoImage(master=hbd2,file='hbdcake.png')
    Button(hbd2,image=photo,command=hbd3).pack(side=BOTTOM,expand=YES,fill=BOTH,anchor=CENTER)
    root2.mainloop()
    sys.exit()

Label(hbd1,text='Happy birthday!',font=('Georgia',15),bg='thistle1').pack(side=TOP,expand=YES,fill=BOTH,anchor=CENTER)
button=Button(hbd1,text='A little surprise...',bg='#ff82ab',command=hbd2)
button['font']=myFont
button.pack(side=BOTTOM,expand=YES,fill=BOTH,anchor=CENTER)

root1.mainloop()
