from serial import Serial

class Claw:
    OPEN_CLAW_MESSAGE = "1"
    CLOSE_CLAW_MESSAGE = "0"
    def __init__(self, connection: Serial):
        self.connection = connection
    
    def open(self):
        self.connection.write(self.OPEN_CLAW_MESSAGE.encode())
    
    def close(self):
        self.connection.write(self.CLOSE_CLAW_MESSAGE.encode())

