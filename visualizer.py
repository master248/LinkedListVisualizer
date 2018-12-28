from Tkinter import *

class Application(Frame):
    def __init__(self, master=None):
        Frame.__init__(self, master)
        self.master = master
        

root = Tk()
app = Application(master=root)
app.mainloop()
root.destroy()