import math
import bge
import serial
import time
from bge import logic
from bge import events

porta = serial.Serial('COM4', 9600, timeout = 0.05)

def Start(controller):
    own = controller.owner
    print("inicio...")

def Update(controller):
    scene = bge.logic.getCurrentScene()
    obj = scene.objects['Jogador']
    if(porta.inWaiting() > 0):
        data = porta.readline().decode('utf-8')
        time.sleep(0.02)
        letra = data[0]
        print(letra)
        if letra == 'u':
            obj.worldPosition.x += 0.2
            data=""
        if letra == 'd':
            obj.worldPosition.x -= 0.2
            data=""
	