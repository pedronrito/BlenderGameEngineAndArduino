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
    own = controller.owner
    points = own['pontuacao']
    print(points)
    if points == 4:
            porta.write(b'1')
    if points > 4:
            porta.write(b'0')

            
