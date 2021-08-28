from tkinter import *
import datetime 
import time 
import winsound 
from threading import *
  
# Create Object 
clock = Tk() 
clock.title("Alarm Clock")
clock.config(background = "black")

# Set geometry 
clock.geometry("500x300")
 
  
# Use Threading 
def Threading(): 
    t1=Thread(target=alarm) 
    t1.start() 

def alarm(): 
     
    while True: 
        # Set Alarm  
        set_alarm_time = f"{day.get()}:{hour.get()}:{minute.get()}:{second.get()}:{am_pm.get()}"
  
        # Wait for one seconds 
        time.sleep(1) 
  
        # Get current time 
        current_time = datetime.datetime.now().strftime("%A:%I:%M:%S:%p") 
        print(current_time,set_alarm_time) 
  
        # Check whether set alarm is equal to current time or not 
        if current_time == set_alarm_time: 
            # Playing sound 
            winsound.PlaySound("Alarm01.wav", winsound.SND_ASYNC)
            def popmsg():
                root = Tk()
                root.config(bg = "black")
                L1 = Label(root,text = "Time to wake up",font = ("Gabriola",25), fg = "purple", bg = "black")
                L1.pack()
                B1 = Button(root, text = "Dismiss", command = root.destroy, fg = "white", bg = "black")
                B1.pack()
                root.mainloop()
            popmsg()
            break

# Add Labels, Frame, Button, Optionmenus 
Label(clock,text="Alarm Clock",font=("Helvetica 20 bold"),bg = "black",fg="purple").pack(pady=10) 

def timimings():
    day1 = time.strftime("%A")
    hour = time.strftime("%I")
    minute = time.strftime("%M")
    seconds = time.strftime("%S")
    am_pm = time.strftime("%p")

    myLabel.config(text = day1 + " : " + hour + " : " + minute + " : " + seconds + " " + am_pm)
    myLabel.after(1000 , timimings)

myLabel = Label(clock , text = "" , font = ("Gabriola",25) , fg = "white" , bg = "black")
myLabel.pack(pady = 2)

timimings()

Label(clock,text="Set Time",bg = "black",fg = "purple",font=("Helvetica 15 bold")).pack() 
  
frame = Frame(clock) 
frame.pack() 

day = StringVar(clock)
days = ('Day','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday')
day.set(days[0])
dys = OptionMenu(frame, day , *days)
dys.pack(side = LEFT)
dys.config(background = "black" , foreground = "white")

hour = StringVar(clock) 
hours = ('hour','00', '01', '02', '03', '04', '05', '06', '07', 
         '08', '09', '10', '11', '12'
        ) 
hour.set(hours[0]) 
  
hrs = OptionMenu(frame, hour, *hours) 
hrs.pack(side=LEFT) 
hrs.config(background = "black",foreground = "white")
  
minute = StringVar(clock) 
minutes = ('minutes','00', '01', '02', '03', '04', '05', '06', '07', 
           '08', '09', '10', '11', '12', '13', '14', '15', 
           '16', '17', '18', '19', '20', '21', '22', '23', 
           '24', '25', '26', '27', '28', '29', '30', '31', 
           '32', '33', '34', '35', '36', '37', '38', '39', 
           '40', '41', '42', '43', '44', '45', '46', '47', 
           '48', '49', '50', '51', '52', '53', '54', '55', 
           '56', '57', '58', '59', '60') 
minute.set(minutes[0]) 
  
mins = OptionMenu(frame, minute, *minutes) 
mins.pack(side=LEFT)
mins.config(background = "black",foreground = "white") 
  
second = StringVar(clock) 
seconds = ('00', '01', '02', '03', '04', '05', '06', '07', 
           '08', '09', '10', '11', '12', '13', '14', '15', 
           '16', '17', '18', '19', '20', '21', '22', '23', 
           '24', '25', '26', '27', '28', '29', '30', '31', 
           '32', '33', '34', '35', '36', '37', '38', '39', 
           '40', '41', '42', '43', '44', '45', '46', '47', 
           '48', '49', '50', '51', '52', '53', '54', '55', 
           '56', '57', '58', '59', '60') 
second.set(seconds[0]) 
  
secs = OptionMenu(frame, second, *seconds) 
secs.pack(side=LEFT) 
secs.config(background = "black",foreground = "white")

am_pm = StringVar(clock)
set_am_pm = ('AM','PM')
am_pm.set(set_am_pm[0])

am_or_pm = OptionMenu(frame, am_pm, *set_am_pm)
am_or_pm.pack(side=LEFT)
am_or_pm.config(background = "black",foreground = "white")

Button(clock,text="Set Alarm",font=("Helvetica 15"),command=Threading,bg = "black" , fg = "purple").pack(pady=20) 
  
# Execute Tkinter 
clock.mainloop()