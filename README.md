# C++ Programming Fundamentals

![C++17](https://img.shields.io/badge/C%2B%2B-17-00599C?logo=cplusplus) ![CMake](https://img.shields.io/badge/build-CMake-064F8C?logo=cmake) ![Programs](https://img.shields.io/badge/programs-68-informational)

A curated collection of 68 small, self-contained C++ console programs written while learning the language — from arithmetic expressions and control flow to dynamic arrays, matrices and recursion.

Exercises in `04-decision-structures` follow chapters 16–20 of *C++ and Algorithmic Thinking for the Complete Beginner*; the rest come from university lab assignments. Each file is a standalone program with its own `main()`.

## Contents

| Topic | Programs |
|---|---|
| [`01-math-expressions`](01-math-expressions) — Math expressions (`<cmath>`) | 9 |
| [`02-quotient-and-remainder`](02-quotient-and-remainder) — Integer division & modulo | 4 |
| [`03-strings`](03-strings) — String manipulation | 5 |
| [`04-decision-structures`](04-decision-structures) — Decision structures (`if` / `switch`) | 38 |
| [`05-loops-and-series`](05-loops-and-series) — Loops & numeric series | 4 |
| [`06-arrays-and-matrices`](06-arrays-and-matrices) — Arrays, matrices & recursion | 7 |
| [`07-mini-projects`](07-mini-projects) — Mini projects | 1 |

## Build & run

Requires a C++17 compiler (GCC, Clang or MSVC) and CMake ≥ 3.16.

```bash
cmake -S . -B build
cmake --build build
./build/ch20-ex05-atm-pin-simulator   # every .cpp becomes its own executable
```

Or compile a single file directly:

```bash
g++ -std=c++17 04-decision-structures/ch19-ex05-roman-numerals.cpp -o roman && ./roman
```

> Two programs (`secret-password-generator`, `ch16-ex08-uppercase-check`) use **Boost.StringAlgo**. CMake builds them automatically when Boost is installed and skips them otherwise.

## Math expressions (`<cmath>`)

| File | What it does |
|---|---|
| [`expression-2i.cpp`](01-math-expressions/expression-2i.cpp) | Evaluate (x+3)^(5w) / 7(x-4) |
| [`expression-2ii.cpp`](01-math-expressions/expression-2ii.cpp) | Evaluate 5·√(3x² − x³/4) |
| [`expression-2iii.cpp`](01-math-expressions/expression-2iii.cpp) | Evaluate a nested polynomial/root expression |
| [`expression-2iv.cpp`](01-math-expressions/expression-2iv.cpp) | Evaluate a rational + power expression |
| [`expression-2v-trig.cpp`](01-math-expressions/expression-2v-trig.cpp) | Trigonometric expression with M_PI |
| [`expression-2vi-trig.cpp`](01-math-expressions/expression-2vi-trig.cpp) | Combined sin/cos/tan expression |
| [`expression-3.cpp`](01-math-expressions/expression-3.cpp) | √x · (x³ + x²) |
| [`expression-4.cpp`](01-math-expressions/expression-4.cpp) | 7x / (2x + 4(x³ + 4)) |
| [`right-triangle-tangent.cpp`](01-math-expressions/right-triangle-tangent.cpp) | Opposite side of a right triangle from angle + adjacent side |

## Integer division & modulo

| File | What it does |
|---|---|
| [`atm-banknote-breakdown.cpp`](02-quotient-and-remainder/atm-banknote-breakdown.cpp) | Minimum banknotes for a withdrawal amount |
| [`last-digit-times-eight.cpp`](02-quotient-and-remainder/last-digit-times-eight.cpp) | Extract the last digit of a 4-digit number |
| [`reverse-five-digit-number.cpp`](02-quotient-and-remainder/reverse-five-digit-number.cpp) | Reverse a 5-digit integer using % and / |
| [`seconds-to-weeks-days-hours.cpp`](02-quotient-and-remainder/seconds-to-weeks-days-hours.cpp) | Convert seconds to weeks/days/hours/minutes/seconds |

## String manipulation

| File | What it does |
|---|---|
| [`name-formatter.cpp`](03-strings/name-formatter.cpp) | Format a full name with title in several styles |
| [`random-five-letter-word.cpp`](03-strings/random-five-letter-word.cpp) | Generate a random 5-letter word |
| [`reverse-number-without-modulo.cpp`](03-strings/reverse-number-without-modulo.cpp) | Reverse a number without the % operator |
| [`reverse-three-digit-number.cpp`](03-strings/reverse-three-digit-number.cpp) | Reverse a 3-digit number via string indexing |
| [`secret-password-generator.cpp`](03-strings/secret-password-generator.cpp) | Random password from letters and digits (uses Boost) |

## Decision structures (`if` / `switch`)

| File | What it does |
|---|---|
| [`ch16-ex04-positive-number.cpp`](04-decision-structures/ch16-ex04-positive-number.cpp) | Detect a positive number |
| [`ch16-ex05-both-positive.cpp`](04-decision-structures/ch16-ex05-both-positive.cpp) | Check that two numbers are positive |
| [`ch16-ex07-driving-age.cpp`](04-decision-structures/ch16-ex07-driving-age.cpp) | Driving-age check |
| [`ch16-ex08-uppercase-check.cpp`](04-decision-structures/ch16-ex08-uppercase-check.cpp) | Detect all-uppercase strings (uses Boost) |
| [`ch16-ex09-long-string.cpp`](04-decision-structures/ch16-ex09-long-string.cpp) | Detect strings longer than 20 chars |
| [`ch16-ex10-any-negative.cpp`](04-decision-structures/ch16-ex10-any-negative.cpp) | Detect a negative among four numbers |
| [`ch16-ex11-sort-two-numbers.cpp`](04-decision-structures/ch16-ex11-sort-two-numbers.cpp) | Swap to ascending order |
| [`ch16-ex12-heat-wave.cpp`](04-decision-structures/ch16-ex12-heat-wave.cpp) | Average temperature heat-wave alert |
| [`ch17-ex03-trace-table.cpp`](04-decision-structures/ch17-ex03-trace-table.cpp) | Flowchart-to-code with trace table |
| [`ch17-ex04-match-winner.cpp`](04-decision-structures/ch17-ex04-match-winner.cpp) | Football match winner |
| [`ch17-ex05-multiple-of-six.cpp`](04-decision-structures/ch17-ex05-multiple-of-six.cpp) | Multiple-of-6 check |
| [`ch17-ex06-multiple-of-six-or-seven.cpp`](04-decision-structures/ch17-ex06-multiple-of-six-or-seven.cpp) | Multiple of 6 or 7 |
| [`ch17-ex07-division-structure.cpp`](04-decision-structures/ch17-ex07-division-structure.cpp) | Show n = q × 4 + r |
| [`ch17-ex08-four-digit-check.cpp`](04-decision-structures/ch17-ex08-four-digit-check.cpp) | Four-digit integer check |
| [`ch17-ex09-smaller-value.cpp`](04-decision-structures/ch17-ex09-smaller-value.cpp) | Smaller of two values |
| [`ch17-ex10-triangle-validity.cpp`](04-decision-structures/ch17-ex10-triangle-validity.cpp) | Can three lengths form a triangle? |
| [`ch17-ex11-right-triangle.cpp`](04-decision-structures/ch17-ex11-right-triangle.cpp) | Right-triangle check (Pythagoras) |
| [`ch17-ex12-long-jump-qualifier.cpp`](04-decision-structures/ch17-ex12-long-jump-qualifier.cpp) | Long-jump qualification average |
| [`ch17-ex13-net-pay-overtime.cpp`](04-decision-structures/ch17-ex13-net-pay-overtime.cpp) | Net pay with overtime and deductions |
| [`ch17-ex14-vehicle-service.cpp`](04-decision-structures/ch17-ex14-vehicle-service.cpp) | Next vehicle service type and distance |
| [`ch17-ex15-car-race-distance.cpp`](04-decision-structures/ch17-ex15-car-race-distance.cpp) | Distance between two accelerating cars |
| [`ch18-ex04-match-result.cpp`](04-decision-structures/ch18-ex04-match-result.cpp) | Match winner or draw |
| [`ch18-ex05-digit-count.cpp`](04-decision-structures/ch18-ex05-digit-count.cpp) | Count digits of an integer |
| [`ch18-ex07-currency-converter.cpp`](04-decision-structures/ch18-ex07-currency-converter.cpp) | USD to EUR/GBP/JPY/CAD menu |
| [`ch18-ex08-month-to-season.cpp`](04-decision-structures/ch18-ex08-month-to-season.cpp) | Month number to season |
| [`ch18-ex10-number-to-words.cpp`](04-decision-structures/ch18-ex10-number-to-words.cpp) | 1.0–4.9 as English words |
| [`ch18-ex11-letter-grade.cpp`](04-decision-structures/ch18-ex11-letter-grade.cpp) | Letter grade to percentage range |
| [`ch19-ex03-month-name.cpp`](04-decision-structures/ch19-ex03-month-name.cpp) | Month number to name (switch) |
| [`ch19-ex04-miles-converter.cpp`](04-decision-structures/ch19-ex04-miles-converter.cpp) | Miles to yards/feet/inches menu |
| [`ch19-ex05-roman-numerals.cpp`](04-decision-structures/ch19-ex05-roman-numerals.cpp) | 1–10 to Roman numerals |
| [`ch19-ex06-loyalty-points.cpp`](04-decision-structures/ch19-ex06-loyalty-points.cpp) | CD shop loyalty points |
| [`ch19-ex07-random-greeting.cpp`](04-decision-structures/ch19-ex07-random-greeting.cpp) | Random greeting |
| [`ch19-ex08-digit-to-word.cpp`](04-decision-structures/ch19-ex08-digit-to-word.cpp) | Digit to word (switch) |
| [`ch19-ex09-beaufort-scale.cpp`](04-decision-structures/ch19-ex09-beaufort-scale.cpp) | Beaufort wind scale lookup |
| [`ch20-ex04-triangle-classifier.cpp`](04-decision-structures/ch20-ex04-triangle-classifier.cpp) | Classify a triangle (equilateral / right / other) |
| [`ch20-ex05-atm-pin-simulator.cpp`](04-decision-structures/ch20-ex05-atm-pin-simulator.cpp) | ATM with PIN retries and note dispensing |
| [`ch20-ex06-weather-description.cpp`](04-decision-structures/ch20-ex06-weather-description.cpp) | Hot/cold + windy/calm description |
| [`max-of-two.cpp`](04-decision-structures/max-of-two.cpp) | Maximum of two numbers (if / else if) |

## Loops & numeric series

| File | What it does |
|---|---|
| [`max-position-in-sequence.cpp`](05-loops-and-series/max-position-in-sequence.cpp) | Position of the maximum in a 0-terminated sequence |
| [`menu-calculator.cpp`](05-loops-and-series/menu-calculator.cpp) | Four-operation menu calculator |
| [`series-sum.cpp`](05-loops-and-series/series-sum.cpp) | Sum of a power series with N terms |
| [`series-with-precision.cpp`](05-loops-and-series/series-with-precision.cpp) | Series sum vs. precision E |

## Arrays, matrices & recursion

| File | What it does |
|---|---|
| [`figure-skating-scores.cpp`](06-arrays-and-matrices/figure-skating-scores.cpp) | Figure-skating score parser (drop high/low) |
| [`matrix-max-element.cpp`](06-arrays-and-matrices/matrix-max-element.cpp) | Matrix max element search |
| [`matrix-max-from-file.cpp`](06-arrays-and-matrices/matrix-max-from-file.cpp) | Find max in a 100×100 matrix read from file |
| [`matrix-max-to-corner.cpp`](06-arrays-and-matrices/matrix-max-to-corner.cpp) | Permute rows/cols to move max to top-left |
| [`merge-by-digit-sum.cpp`](06-arrays-and-matrices/merge-by-digit-sum.cpp) | Merge arrays by max digit sum (dynamic arrays) |
| [`palindrome-check.cpp`](06-arrays-and-matrices/palindrome-check.cpp) | Two-pointer palindrome check |
| [`recursive-vector-sum.cpp`](06-arrays-and-matrices/recursive-vector-sum.cpp) | Recursive sum of CLI args |

## Mini projects

| File | What it does |
|---|---|
| [`console-calculator-with-history.cpp`](07-mini-projects/console-calculator-with-history.cpp) | Menu calculator with operation history |

## Skills practiced

- Arithmetic, operator precedence and `<cmath>` functions
- Integer division / modulo for digit extraction and unit conversion
- `std::string` indexing, formatting and random generation
- `if / else if`, nested decisions, `switch`, input validation
- Loops, series approximation with a precision threshold
- Dynamic memory (`new[]` / `delete[]`), 2-D arrays, file input, recursion

## License

[MIT](LICENSE)
