from tkinter import *
from tkinter import ttk
import subprocess


# Function to execute the code entered by the user
def run_code():
    # Get the code entered by the user
    code = code_entry.get('1.0', 'end-1c')
    
    # Write the code to file
    with open('code.txt', 'w') as f:
        f.write(code)
    
    exe_file = "C:/Users/Amani/Desktop/compilation/MiniJavaCompilerProject/compiler.exe"
    text_file = "C:/Users/Amani/Desktop/compilation/MiniJavaCompilerProject/code.txt"
    command = [exe_file, '<', text_file]
    
    try:
        # Execute the command and get the output
        result = subprocess.run(command, capture_output=True, text=True, input=code)
        
        # Display the output
        result_text.delete('1.0', END)
        print("Output executing command:", result.stdout)

        # Display any errors
        if result.stderr:
            print("Error executing command:", result.stderr)
            result_text.insert(END, result.stderr)
    
    except subprocess.CalledProcessError as e:
        print("Error executing command:", e)
    
    

# Function to reset the input and output fields
def reset_fields():
    code_entry.delete('1.0', END)
    result_text.delete('1.0', END)






# Create the main window
root = Tk()
root.title('Code Runner')
root.configure(bg='#073642')

# Create a new style
style = ttk.Style()

# Configure the style for a rounded button
style.configure('RoundedButton.TButton', 
                font=('Helvetica', 12, 'bold'), 
                borderwidth=2,
                relief='flat',
                background='#eee8d5',
                foreground='#073642',  # text color inside buttons
                padding=15,
                focuscolor='#eee8d5',
                focusthickness=0,
                bordercolor='#eee8d5',
                highlightthickness=0,
                highlightcolor='#3CB371',
                borderround=80)

# Set the style for all buttons
style.configure('TButton', background='#eee8d5', font=('Helvetica', 12))

# Create a frame for the title and buttons
title_frame = Frame(root, bg='#073642')
title_frame.pack(side=TOP, pady=10)

# Create the title
title_label = Label(title_frame, text='Mini Java Compiler', font=('Helvetica', 16), bg='#073642', fg='#eee8d5')
title_label.pack()

# Create a frame for the buttons
fields_frame = Frame(root, bg='#073642')
fields_frame.pack(pady=10)

# Create the Reset button
reset_button = ttk.Button(title_frame, text='Reset', command=reset_fields, style='RoundedButton.TButton')
reset_button.pack(side=LEFT, padx=10)

# Create the submit button
submit_button = ttk.Button(title_frame, text='Run Code', command=run_code, style='RoundedButton.TButton')
submit_button.pack(side=RIGHT)

# Create a frame for the input and output fields
fields_frame = Frame(root, bg='#073642')
fields_frame.pack(pady=10)

# Create the code entry field
code_entry = Text(fields_frame, height=10, width=50, bg='#073642', fg='#eee8d5', font=('Helvetica', 12))
code_entry.pack(side=LEFT, padx=10)

# Create the result display field
result_text = Text(fields_frame, height=10, width=50, bg='#073642', fg='#eee8d5', font=('Helvetica', 12))
result_text.pack(side=RIGHT, padx=10)

# Start the main loop
root.mainloop()
