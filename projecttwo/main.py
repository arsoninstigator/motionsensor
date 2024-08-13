
from machine import Pin
from time import sleep

# creating a PIR object, setting it as IN
pir = Pin(16, Pin.IN)

led_pin = Pin(27, Pin.OUT)
buzzer = Pin(5, Pin.OUT)
 
# continuously read data from the PIR sensor
# print a status whether a motion or detected or not 
while True:
  if pir.value() == 1:
    print(f"PIR value: {pir.value()}    Status: Motion detected!")
    led_pin.on()
    buzzer.on()
      
   
  else:
    print(f"PIR value: {pir.value()}     Status: Waiting for movement...")
    led_pin.off()
    buzzer.off()

    # PIR sensor would check for movement every second
  sleep(1)
