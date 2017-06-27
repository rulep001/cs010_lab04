# CS 10 - Lab 4: String Member Function, Characters and Branches

## Overview
Your goal is to get a single keystroke from the user and report whether the keystroke is:
* a lowercase alphabetic character ('a' through 'z')
* an uppercase alphabetic character ('A' through 'Z')
* a numeric digit ('0' through '9')
* some other character

Write a program that prompts the user to enter a single character: you will capture that input in a variable of type char. Then, using a sequence of if ‐ else if ‐ else statements, report back to the user what type of character they entered, as above.

### How Will You Know?
Recall that the char data type is really just a "small number" type, a char can store numbers from ‐128 to +127 (or from 0 to 256, depending on how you use it). Each number from 0 to 127 is mapped to a character on your keyboard, grouped more or less as you would expect:
* Characters from '0' to '9' in sequence come first (i.e. lower number mappings).
* Characters from 'A' to 'Z' in sequence are in the middle.
* Characters from 'a' to 'z' in sequence are the higher number mappings.
* The punctuation marks and other symbols are scattered throughout the ascii table.

## Output
* You entered a lowercase letter.
* You entered an uppercase letter.
* You entered a numeric digit.
* You entered an unknown character type.

## Known Bugs
No currently known bugs!
