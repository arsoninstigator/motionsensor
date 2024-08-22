import machine
import utime

pir = machine.Pin(16, machine.Pin.IN)
alarm = machine.Pin(14, machine.Pin.OUT)

while True:
    if pir.value() == 1:
        alarm.value(1)  # Turn on the alarm
        utime.sleep(5)  # Keep the alarm on for 5 seconds
        alarm.value(0)  # Turn off the alarm
    utime.sleep(0.1)
