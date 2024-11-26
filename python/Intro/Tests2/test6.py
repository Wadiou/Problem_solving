
def count_words(filename):
    """Count the approximate number of words in a file."""
    try:
        with open(filename) as f_obj:
            contents = f_obj.read()
    except FileNotFoundError:
        msg = "Sorry, the file " + filename + " does not exist."
        print(msg)
    else:
        words = contents.split()  # This will still execute even if the file isn't found
        num_words = len(words)    # This could result in an error if 'contents' is undefined
        print("The file " + filename + " has about " + str(num_words) + " words.")

filename = 'unknown'
count_words(filename)