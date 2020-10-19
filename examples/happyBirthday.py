import tkinter 
import tkinter.font as font
import sys

class start_window(tkinter.Frame):
    def __init__(self,parent=None):
        tkinter.Frame.__init__(self,parent)
        tkinter.Frame.pack(self)


root1=tkinter.Tk()
root1.configure(background='thistle1')
root1.title('All about you :)')
root1.geometry('400x400')
hbd1=start_window(root1)

myFont=font.Font(size=12,family='Georgia')

def delete():
    print('Bye <3')
    sys.exit()

def hbd3():
    root3=tkinter.Tk()
    root3.configure(background='PaleTurquoise1')
    root3.title('Blow out your candles!')
    root3.geometry('500x600')
    hbd3=start_window(root3)
    tkinter.Label(hbd3,text='...and have a great day!',bg='PaleTurquoise1',font=('Georgia',15)).pack(side=tkinter.TOP,expand=tkinter.YES,fill=tkinter.BOTH,anchor=tkinter.CENTER)
    photo2=tkinter.PhotoImage(master=hbd3,file='hbddog.png')
    tkinter.Button(hbd3,image=photo2,command=delete).pack(side=tkinter.BOTTOM,expand=tkinter.YES,fill=tkinter.BOTH,anchor=tkinter.CENTER)
    root3.mainloop()
    sys.exit()

def hbd2():
    root2=tkinter.Tk()
    root2.configure(background='green yellow')
    root2.title('A little love from an internet stranger!')
    root2.geometry('500x600')
    hbd2=start_window(root2)
    tkinter.Label(hbd2,text='Make a wish!!!',bg='green yellow',font=('Georgia',15)).pack(side=tkinter.TOP,expand=tkinter.YES,fill=tkinter.BOTH,anchor=tkinter.CENTER)
    photo=tkinter.PhotoImage(master=hbd2,file='hbdcake.png')
    tkinter.Button(hbd2,image=photo,command=hbd3).pack(side=tkinter.BOTTOM,expand=tkinter.YES,fill=tkinter.BOTH,anchor=tkinter.CENTER)
    root2.mainloop()
    sys.exit()

tkinter.Label(hbd1,text='Happy birthday!',font=('Georgia',15),bg='thistle1').pack(side=tkinter.TOP,expand=tkinter.YES,fill=tkinter.BOTH,anchor=tkinter.CENTER)
button=tkinter.Button(hbd1,text='A little surprise...',bg='#ff82ab',command=hbd2)
button['font']=myFont
button.pack(side=tkinter.BOTTOM,expand=tkinter.YES,fill=tkinter.BOTH,anchor=tkinter.CENTER)

root1.mainloop()
