class Car:
    def __init__(self, brand, model,year, max_speed, color="Black"):
        self.brand = brand
        self.model = model
        self.year = year
        self.max_speed = max_speed
        self.speed = 0
        self.color = color
        self.is_running = False

    def start(self):
        if not self.is_running:
            self.is_running = True
            print(f"{self.brand} is now started.")
        else:
            print(f"{self.brand} is already running.")

    def stop(self):
        if self.is_running:
            self.is_running = False
            self.speed = 0
            print(f"{self.brand} has stopped.")
        else:
            print(f"{self.brand} is already off.")

    def increase_speed(self, value):
        if not self.is_running:
            print(f"Cannot increase speed. {self.brand} is not running.")
            return
        self.speed = min(self.speed + value, self.max_speed)
        print(f"{self.brand} is now running at {self.speed} km/h.")

    def decrease_speed(self, value):
        if not self.is_running:
            print(f"Cannot decrease speed. {self.brand} is not running.")
            return
        self.speed = max(self.speed - value, 0)
        print(f"{self.brand} has slowed down to {self.speed} km/h.")

    def repaint(self, new_color):
        old_color = self.color
        self.color = new_color
        print(f"{self.brand} has been repainted from {old_color} to {self.color}.")

    def honk(self):
        print(f"{self.brand} says: Honk! Honk!")

    def __str__(self):
        status = "running" if self.is_running else "stopped"
        return f"{self.brand} {self.model} ({self.year}) - Color: {self.color}, Speed: {self.speed}/{self.max_speed} km/h, Status: {status}"
class ElectricalCar(Car) :
    def __init__(self, brand, model, year, max_speed, color="White"):
        super().__init__(brand,model,year,max_speed,color)

car1 = Car("Mercedes-Benz", "C63 AMG", 2024, 300 , "Silver")
print(car1)
car1.start()
car1.increase_speed(50)
car1.increase_speed(300)
car1.decrease_speed(100)
car1.repaint("Matte Black")
car1.stop()
car1.honk()
print(car1)
car2 = ElectricalCar('tesla', 'model s', 2016,250)
print(car2)