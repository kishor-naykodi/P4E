#My Schedule

from pygame import mixer
from datetime import datetime
from time import time
from time import sleep

# musiconloop("water.mp3", "stop")
def musiconloop(file, stopper):
    mixer.init()
    mixer.music.load(file)
    mixer.music.play()
    while True:
        input_of_user = input()
        if input_of_user == stopper:
            mixer.music.stop()
            break

def log_now(msg):
    with open("mylogs.txt", "a") as f:
        f.write(f"{msg} {datetime.now()}\n")

def getTime():
    global timeNow
    currentDT = datetime.now()
    timeNow = currentDT.strftime("%H:%M:%S")
    # print(timeNow)

if __name__ == '__main__':
    timeNow = ""

    getTime()

    init_time = time()

    pythontime = "09:00:00"
    collegetime = "10:00:00"
    dsatime = "03:00:00"
    sporttime=  "05:00:00"
    dbmstime=  "07:00:00"
    wttime= "09:00:00"

    while True:
        getTime()
        sleep(3600*15)
        # print(timeNow)
        if timeNow == pythontime:
            print("Its time to learn Python!!!")
            musiconloop('Reminder.mp3', 'done')
            log_now("Python done")


        if int(time() - init_time) == collegetime:
            print("Its time to do college lectures!!!")
            musiconloop('Reminder.mp3', 'done')
            log_now("College done")


        if int(time() - init_time) == dsatime:
            print("Its time to learn DSA!!!")
            musiconloop('Reminder.mp3', 'done')
            log_now("DSA done")

        if int(time() - init_time) == sporttime:
            print("Its time to playing games and sport!!!")
            musiconloop('Reminder.mp3', 'done')
            log_now("Sport done")

        if int(time() - init_time) == dbmstime:
            print("Its time to learn DBMS!!!")
            musiconloop('Reminder.mp3', 'done')
            log_now("DBMS done")

        if int(time() - init_time) == wttime:
            print("Its time to learn WT!!!")
            musiconloop('Reminder.mp3', 'done')
            log_now("WT done")

            print("You have done your work well!!!\nNow Its time to sleep\nGood night")
            break




