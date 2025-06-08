# Number Guessing Game in C

A fun and simple command-line number guessing game written in C. The program generates a random number between 1 and 100, and the player has to guess it. Feedback is provided after each guess until the correct number is found.

## Description

This project is a beginner-friendly C program that demonstrates the use of loops, conditionals, random number generation, and user input. It helps in understanding core programming concepts and is a great practice exercise for those learning the C programming language.

## Getting Started

### Dependencies

* A C compiler (like `gcc`)
* Operating System: Works on Windows, Linux, or macOS
* Optional: VS Code or any C IDE for ease of development

### Installing

1. Clone the repository:
   ```
   git clone https://github.com/omerwritescode/c-guessing-game.git
   ```
2. Navigate into the project directory:
   ```
   cd c-guessing-game
   ```

### Executing Program

1. Compile the program using a C compiler:
   ```
   gcc guessing_game.c -o guessing_game
   ```

2. Run the program:
   ```
   ./guessing_game
   ```

3. Follow the prompts to guess the number.

## Help

If the program doesn't compile:
```
Ensure that GCC is installed: gcc --version
```

If it compiles but doesn't run correctly:
```
Make sure you've used srand(time(0)) and rand() properly.
```

## Authors

Omer Raza  
[@omerwritescode](https://github.com/omerwritescode)

## Version History

* 0.1
    * Initial Release
    * Functional number guessing game with random number generation and attempt counter

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
