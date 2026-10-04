# Line Editor in C

## Project Description

A simple command-line line editor developed in C. The editor allows users to create, view, and modify a small text document through simple menu-based commands.

## Team Members

1. Gnanesh Gowda DP
2. Likhithesh M
3. Dhananjay M

## Features Implemented

* Insert a line
* Delete a line
* Display the document
* Exit the editor

## Data Structure

The editor stores document lines using an array of strings.

This approach is simple and suitable for a small text document. Lines can be inserted and deleted by shifting the existing lines.

## How to Compile

Open Terminal in the project folder and run:

```bash
gcc line-editor.c -o line-editor
```

## How to Run

```bash
./line-editor
```

## Example

```text
===== LINE EDITOR =====
1. Insert line
2. Delete line
3. Display document
4. Exit

Enter your choice: 1
Enter line number: 1
Enter text: Hello World
Line inserted successfully.

Enter your choice: 3

--- Document ---
1: Hello World
```

## Project Files

* `line-editor.c` - Main C program
* `HELP.md` - Commands and usage examples
* `README.md` - Project information and instructions
