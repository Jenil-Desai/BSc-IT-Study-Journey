import conversion_operations as cu

temp_c = float(input("Enter temperature in Celsius: "))
print(f" {temp_c} °C = {cu.celsius_to_fahrenheit (temp_c)}°F")

temp_f = float (input ("Enter temperature in Fahrenheit: ")) 
print(f" {temp_f} °F {cu.fahrenheit_to_celsius (temp_f) } °C")

distance_km = float (input("Enter distance in kilometers: "))
print(f" {distance_km} km = {cu.kilometers_to_miles (distance_km)} miles")

distance_mi = float(input("Enter distance in miles: "))
print(f" {distance_mi} miles = {cu.miles_to_kilometers (distance_mi)} km")