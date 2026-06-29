# ASCII File Converter (C++)

A simple C++ console application that converts **plain text to ASCII** and **ASCII back to plain text** using files.

Unlike many ASCII converters that require you to type everything into the console, this program allows you to **save the converted ASCII output to a file in any folder you choose** and convert an existing ASCII file back into readable text.

## Features

* Convert text into ASCII values.
* Save the ASCII output to a file in any directory.
* Convert an ASCII file back into readable text.
* Simple command-line interface.
* Written using only the C++ Standard Library.

---

## How It Works

### Text → ASCII

1. Choose option **1**.
2. Enter your text.
3. Type `END` on a new line when you're finished.
4. Enter a filename.
5. Enter the folder path where the file should be saved.
6. The program creates a file containing the ASCII values of your text separated by spaces.

Example:

Input:

```
Hello
```

Output file:

```
72 101 108 108 111
```

---

### ASCII → Text

1. Choose option **2**.
2. Enter the path to an ASCII file.
3. The program reads the ASCII values and converts them back into readable text.

Example:

ASCII file:

```
72 101 108 108 111
```

Output:

```
Hello
```

---

## Building

Compile using any C++ compiler that supports C++11 or later.

Example (g++):

```bash
g++ main.cpp -o ASCIIConverter
```

Run:

```bash
./ASCIIConverter
```

On Windows:

```bash
ASCIIConverter.exe
```

---

## Notes

* Enter `END` on a new line to finish entering text.
* The program expects ASCII values separated by spaces.
* Make sure the folder path you provide exists.
* If saving fails, verify that the path is correct and that you have permission to write to that location.

---

## Future Improvements

* GUI version using Dear ImGui.
* Drag-and-drop file support.
* Unicode (UTF-8) support.
* Better error handling.
* Option to overwrite existing files safely.
* Batch conversion of multiple files.

---

## License

This project is open source. Feel free to modify and improve it.
