# Temperature Conversion Program

### Story:

You’ve been hired to create a temperature conversion tool for a weather app. The app needs to convert temperatures between Celsius (°C) and Fahrenheit (°F). Your task is to write a program in C that takes a temperature value as input and converts it based on the user’s desired conversion type.

### Requirements:

1. **Prompt for conversion type**: The program should ask the user whether they want to convert:
   - Celsius to Fahrenheit (C to F)
   - Fahrenheit to Celsius (F to C)
2. **Input Validation**:

   - Ensure that the user enters valid options for conversion type.
   - Handle invalid temperature inputs gracefully.

3. **Formula for conversion**:

   - **Celsius to Fahrenheit**:  
     `F = (C × 9/5) + 32`
   - **Fahrenheit to Celsius**:  
     `C = (F - 32) × 5/9`

4. **User Input**:

   - Prompt the user to input the temperature value they want to convert.
   - The user should also choose the conversion type (C to F or F to C).

5. **Output**:
   - After conversion, display the original temperature, the conversion type, and the converted temperature.

### Expected Input:

- Conversion type: A string or character, such as "C to F" or "F to C".
- Temperature value: A floating-point number that represents the temperature.

### Expected Output:

- **If converting from Celsius to Fahrenheit**:  
  Example input: `C to F` and `25°C`  
  Example output: `25°C is 77°F`
- **If converting from Fahrenheit to Celsius**:  
  Example input: `F to C` and `77°F`  
  Example output: `77°F is 25°C`

### Additional Features:

- Option to convert another temperature after the first conversion is done.
- Display a message if the user enters an invalid option or temperature value.

### This program will help you practice:

- Working with conditionals and loops.
- Implementing basic math operations in C.
- Handling user input and output with `printf` and `scanf`.
