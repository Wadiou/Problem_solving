from test2 import make_pizza as mp
# message = int(input("Tell me something, and I will repeat it back to you: "))
# print(message**2)

unconfirmed_users = ['alice', 'brian', 'candace']
confirmed_users = []
while unconfirmed_users:
    current_user = unconfirmed_users.pop()
    print("Verifying user: " + current_user.title())
    confirmed_users.append(current_user)
    print("\nThe following users have been confirmed:")
for confirmed_user in confirmed_users:
    print(confirmed_user.title())


def describe_pet(animal_type, pet_name):
    """Display information about a pet."""
    print("\nI have a " + animal_type + ".")
    print("My " + animal_type + "'s name is " + pet_name.title() + ".")

describe_pet(animal_type='hamster', pet_name='harry')
describe_pet(pet_name='harry', animal_type='hamster')

print("" == True )
print( "c" == True)

def showname (First_name , Last_name , Middle_name = '') :
    if Middle_name :
        name = First_name + Last_name + Middle_name
    else :
        name = First_name + Last_name
    print(name)

showname("wadoud" , "Tali" , "prime")
showname("wadoud" , "tali")

def make_pizza(*toppings):
    print(toppings)

make_pizza('pepperoni')
make_pizza('mushrooms', 'green peppers', 'extra cheese')

tuple1 = ("Hello",)
print(tuple1)


def build_profile(first, last, **user_info):
    """Build a dictionary containing everything we know about a user."""
    profile = {}  # Initialize an empty dictionary to store profile info
    profile['first_name'] = first  # Add first name to profile
    profile['last_name'] = last  # Add last name to profile

    # Add all other keyword arguments passed to the function
    for key, value in user_info.items():
        profile[key] = value

    return profile

Me = build_profile("Wadoud","Tali" , field='AI' , Year='Second Year')
print(Me)

mp(12,'mashroom' , 'peproni')
