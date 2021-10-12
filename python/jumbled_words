import tkinter
from tkinter import *
import random
from tkinter import messagebox

answers = ['python','java','react']
words = ['ythonp','ajav','catre']

num = random.randrange(0,3,1)

def default():
    global answers,num,words
    lbl1.config(text = words[num])

def reset():
    global answers, num, words
    num = random.randrange(0, 3, 1)
    lbl1.config(text=words[num])
    e1.delete(0, END)

def checkres():
    global answers, num, words
    ans = e1.get()
    if ans == answers[num]:
        messagebox.showinfo('success')
        reset()

    else:
        messagebox.showinfo('try again')
        e1.delete(0, END)

root = tkinter.Tk()
root.geometry('500x500')
root.configure(background='black')

lbl1 = Label(
    root,
    text = 'you here',
    font = ('sans serif', 18),
    fg = 'black',
    bg = '#4c4b4b'
)
lbl1.pack(pady= '40')

ans1 = StringVar()
e1 = Entry(
    root,
    font = ('sans serif', 18),
    textvariable = ans1,
)
e1.pack()

btn1 = Button(
    root,
    text = 'check',
    font = ('sans serif', 18),
    bg= '#4c4b4b',
    fg= 'green',
    width = 16,
    relief = GROOVE,
    command = checkres,

)
btn1.pack(pady='20')


btn2 = Button(
    root,
    text = 'reset',
    font = ('sans serif', 18),
    bg= '#4c4b4b',
    fg= 'red',
    width = 16,
    relief = GROOVE,
    command = reset,
)
btn2.pack()

default()
root.mainloop()
