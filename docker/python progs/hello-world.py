import tkinter as tk
from tkinter import messagebox
from calculator import add_numbers

def say_hello():
    label.config(text="Hello, World!")

def open_calculator():
    calc_window = tk.Toplevel(root)
    calc_window.title("Add Two Numbers")
    calc_window.geometry("300x200")

    tk.Label(calc_window, text="Enter first number:").pack(pady=5)
    num1 = tk.Entry(calc_window)
    num1.pack()

    tk.Label(calc_window, text="Enter second number:").pack(pady=5)
    num2 = tk.Entry(calc_window)
    num2.pack()

    def calculate_sum():
        try:
            a = float(num1.get())
            b = float(num2.get())
            result = add_numbers(a, b)
            messagebox.showinfo("Result", f"The sum is: {result}")
        except ValueError:
            messagebox.showerror("Error", "Please enter valid numbers.")

    tk.Button(calc_window, text="Calculate Sum", command=calculate_sum).pack(pady=10)

root = tk.Tk()
root.title("Demo App")
root.geometry("600x400")

label = tk.Label(root, text="", font=("Arial", 14))
label.pack(pady=20)

tk.Button(root, text="Say Hello", command=say_hello, font=("Arial", 12)).pack()
tk.Button(root, text="Open Calculator", command=open_calculator, font=("Arial", 12)).pack(pady=10)

root.mainloop()
