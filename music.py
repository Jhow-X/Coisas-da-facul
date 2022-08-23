from mutagen.id3 import ID3
import os, fnmatch

arr = fnmatch.filter(os.listdir("/run/user/1000/gvfs/mtp:host=motorola_moto_g_10__ZF5239GV52/Cartão SD/Music"), '*.mp3')
f = open("music.txt", "a+")
for i in arr:
    try:
        audio = ID3("/run/user/1000/gvfs/mtp:host=motorola_moto_g_10__ZF5239GV52/Cartão SD/Music/{}".format(i)) #path: path to file
        f.write(audio["TIT2"].text[0])
        f.write("\n") #Track 
    except:
        f.write("{} - Error".format(i))
        f.write("\n")
        pass
f.close()