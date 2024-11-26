for i in range(1,6) :
    print(i**3)
squares_gen = [value ** 2 for value in range(1, 11)]
print(squares_gen[2:])

copy_squares = squares_gen[:]
copy_squares.append(121)
print(squares_gen,copy_squares)
if 3 in squares_gen :
    print("3 in our array")
else :
    print("3" == "2")

matrix1 = [[value*_ for value in range(1,6)] for _ in range(1,4)]
print(matrix1)

alien_0 = {'color': 'green', 'points': 5}
print(alien_0)
alien_0['x_position'] = 0
alien_0['y_position'] = 25
print(alien_0)

user_0 = {
'username': 'efermi',
'first': 'enrico',
'last': 'fermi',
}
print(user_0 , user_0.items())

for key , value in user_0.items() :
    print(key + " " + value)

favorite_languages = {
'jen': 'python',
'sarah': 'c',
'edward': 'ruby',
'phil': 'python',
}
friends = ['phil', 'sarah']
print(favorite_languages.keys())
for name in favorite_languages.keys():
    print(name.title())
    if name in friends:
        print(
        "The favorite language of " +  name.title() +" is " +
        favorite_languages[name].title() + "!")
    else :
        print(name.title() + " isn't a friend ")

# Make an empty list for storing aliens.
aliens = []
# Make 30 green aliens.
for alien_number in range (0,30):
    new_alien = {'color': 'green', 'points': 5, 'speed': 'slow'}
    aliens.append(new_alien)
for alien in aliens[0:3]:
    if alien['color'] == 'green':
        alien['color'] = 'yellow'
        alien['speed'] = 'medium'
        alien['points'] = 10
# Show the first 5 aliens:
for alien in aliens[0:5]:
    print(alien)
    print("...")

users = {
    'aeinstein': {
        'first': 'albert',
        'last': 'einstein',
        'location': 'princeton',
    },
    'mcurie': {
        'first': 'marie',
        'last': 'curie',
        'location': 'paris',
    },
}


# Set a flag to indicate that polling is active.
polling_active = True
responses = {}
#
while polling_active:
    # Prompt for the person's name and response.
    name = input("\nWhat is your name? ")
    response = input("Which mountain would you like to climb someday? ")

    # Store the response in the dictionary:
    responses[name] = response

    # Find out if anyone else is going to take the poll.
    repeat = input("Would you like to let another person respond? (yes/ no) ")
    if repeat == 'no':
        polling_active = False

# Polling is complete. Show the results.
print("\n--- Poll Results ---")
for name, response in responses.items():
    print(name + " would like to climb " + response + ".")

def make_pizza(size, *toppings):
    print("\nMaking a " + str(size) +
    "-inch pizza with the following toppings:")
    for topping in toppings:
        print("- " + topping)