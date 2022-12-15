import itertools
from tkinter import *

# Function to generate all possible permutations of the password
def generatePermutations(password):
    # Generate all possible permutations of the password
    permutations = itertools.permutations(password)

    # Create a GUI window
    window = Tk()
    window.title("Permutations")

    # Create a label to display the permutations
    label = Label(window, text="All possible permutations:")
    label.pack()

    # Create a list box to display the permutations
    listbox = Listbox(window)
    listbox.pack()

    # Add the permutations to the list box
    for permutation in permutations:
        listbox.insert(END, permutation)

# Create a GUI window
window = Tk()
window.title("PROGRAM PASSWORD GENERATOR MENGGUNAKAN PERMUTASI")

# Create a label and text entry box for the password
label = Label(window, text="Masukkan kata yang ingin dijadikan password:")
entry = Entry(window)

# Create a button to generate the permutations
button = Button(window, text="Generate permutations", command=lambda: generatePermutations(entry.get()))

# Place the widgets in the window
label.pack()
entry.pack()
button.pack()

# Run the GUI
window.mainloop()
