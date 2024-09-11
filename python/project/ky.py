vowels = "aieo"
def translate(sentence):
    translation= ""
    for list in sentence:
        if list.lower() in vowels:
            if list.isupper():
                translation = translation + "U"
            else:
                translation = translation + "u"
        else:
            translation =  translation + list
    return translation           
print(translate(input("enter a sentence: ")))            