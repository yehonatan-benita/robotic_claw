from serial import serial_for_url

from claw_controller import Claw

PORT = "COM3"
BAUDRATE = "9600"

def main():
    with serial_for_url(PORT, baudrate=BAUDRATE) as connection:
        claw = Claw(connection)
        while True:
            if input("Enter action (1/0)") == "1":
                claw.open()
            else:
                claw.close()

if __name__ == "__main__":
    main()