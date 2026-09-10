# 1337 C Journey and 42 Pool Preparation

<div align="center">

[![sfaraji's 42 stats](https://badge.mediaplus.ma/kettlebells/sfaraji)](https://github.com/oakoudad/badge42)

</div>

This repository is my programming journey at **1337**. It contains the work
done during the Piscine, the C days, shell days, Rush projects, BSQ, and the
extra preparation used to improve my C fundamentals before exams and projects.

The repository has two connected parts:

- [`DAYS/`](DAYS/) is the chronological 1337 journey. Each `CXX`,
  `ShellXX`, `Rush00`, and `bsq` folder represents work completed during that
  stage.
- [`Ultimate/`](Ultimate/) is the preparation library: algorithm practice,
  exam exercises, revision files, recursion exercises, and challenge solutions.

The goal is not only to collect solutions. The goal is to understand the
fundamentals needed for the 42/1337 Pool: C syntax, memory, strings, arrays,
recursion, pointers, shell commands, problem solving, and writing small
programs under strict constraints.

## 1337 Journey: `DAYS/`

The `DAYS` folder contains 15 collections and 127 files, excluding Git
metadata. The exercise numbers follow the original 1337 organization.

| Folder | Focus |
| --- | --- |
| `C00` | First C functions, output, and basic syntax |
| `C01` | Pointers and basic memory manipulation |
| `C02` | Strings, arrays, and common utility functions |
| `C03` | String processing and control flow |
| `C04` | More advanced string and integer exercises |
| `C05` | Recursion and algorithmic thinking |
| `C06` | Command-line arguments and program parameters |
| `C07` | Dynamic memory and more complex functions |
| `C08` | Header files, structures, and reusable code |
| `C09` | Additional C practice and revision |
| `C11` | Advanced C exercises and exam preparation |
| `Shell00` | Unix commands, files, permissions, and terminal basics |
| `Shell01` | Shell scripting and command pipelines |
| `Rush00` | Team project and collaborative problem solving |
| `bsq` | The Biggest Square project, including `src/`, `include/`, `maps/`, and `Makefile` |

Each C or Shell collection contains `ex00`, `ex01`, and similar exercise
folders. These are the day-by-day record of the work done during the 1337
journey. Git metadata has been removed so the workspace contains only the
learning files and project files.

## Pool Preparation: `Ultimate/`

### `algorithms/`

This is a 42-exercise algorithm catalog. Every exercise normally contains a
C implementation and a `subject.html` explaining the problem. Open
[`Ultimate/algorithms/index.html`](Ultimate/algorithms/index.html) to browse the exercises in a
browser.

### `exams/`

- `Ultimate/exams/EXAMS/` contains the organized exam exercises by level, from Level 0 to
  Level 5, plus the original exam README.
- `Ultimate/exams/final_exam/` contains all 40 exercises collected from the
  exam. This is the complete exam exercise reference, not a claim that every
  file is solved.

These files are useful for timed practice. Try to solve each exercise first,
then compare the implementation with the existing C file.

### `practice/`

- `Ultimate/practice/Boss/` contains focused C challenges for strings, searching, counting,
  conversion, structures, and validation.
- `Ultimate/practice/Final/` contains a larger revision collection, including string exercises,
  Caesar and Vigenere ciphers, RLE, parameter handling, runs, and word
  manipulation. `all_32_string_exercises.txt` is the accompanying exercise
  list.
- `Ultimate/practice/rec/` contains small recursion experiments and recursive C programs.

The practice folders are deliberately less formal than `DAYS/`; they are a
workspace for repetition, debugging, and preparing for the next exam.

## Suggested Study Order

1. Start with `DAYS/Shell00` and `DAYS/Shell01` to refresh the Unix basics.
2. Work through `DAYS/C00` to `DAYS/C04` without copying solutions.
3. Use `Ultimate/practice/Final`, `Ultimate/practice/Boss`, and
  `Ultimate/practice/rec` to repeat weak topics.
4. Continue through `DAYS/C05` to `DAYS/C11`, focusing on pointers, memory,
	recursion, arguments, and structures.
5. Use `Ultimate/exams/EXAMS/` and `Ultimate/exams/final_exam/` for timed exercises.
6. Use the 42 exercises in `Ultimate/algorithms/` to build stronger algorithmic
  thinking and prepare for future projects.
7. Finish by reviewing `DAYS/Rush00` and `DAYS/bsq` to practice larger project
	structure and teamwork.

This README is an index of the journey. The source files remain the real
record of the work: read them, compile them, test edge cases, and rewrite the
solutions until the ideas are clear.