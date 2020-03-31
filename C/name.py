from time import sleep
import random as rnd
def evolve(name):
    a=[""]*len(name)
    time=0.0
    count=0
    while(count<len(name)):
        a[count]=rnd.choice(chars)
        print("\r"+"".join(a),end="")
        if a[count]==name[count]:count+=1
        time+=0.01
        sleep(0.01)
    return(time)
with open("characters.txt") as ch:
    chars=ch.read()
chars=rnd.sample(chars,len(chars))
time=evolve(input("Enter a Name/Word/Sentence you want to see getting evolved- "))
print("\n\nThe time required to evolve the given input at a rate of 100 tries per second: {} seconds.".format(round(time,3)))
