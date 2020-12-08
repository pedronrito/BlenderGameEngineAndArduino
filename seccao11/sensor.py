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
        valX, valY = data.split(':')
        print(valX, "----", valY)
        if float(valX):
            if float(valX) >= 0:
                obj.worldPosition.x += 0.2
            if float(valX) < 0:
                obj.worldPosition.x -= 0.2
        if float(valY):
            if float(valY) >= 0:
                obj.worldPosition.y += 0.2
            if float(valY) < 0:
                obj.worldPosition.y -= 0.2
