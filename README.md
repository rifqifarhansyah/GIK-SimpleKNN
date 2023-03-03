# GIK-SimpleKNN
This is a weekly task for GIK research program (ML topics)
# Garuda Ilmu Komputer - Weekly Task
<h2 align="center">
  K-Nearest Neighbor Implementation<br/>
</h2>
<hr>

## Table of Contents
1. [General Info](#general-information)
2. [Creator Info](#creator-information)
3. [Features](#features)
4. [Technologies Used](#technologies-used)
5. [Setup](#setup)
6. [Usage](#usage)
7. [Screenshots](#screenshots)
7. [Structure](#structure)
8. [Project Status](#project-status)
9. [Room for Improvement](#room-for-improvement)
10. [Acknowledgements](#acknowledgements)
11. [Contact](#contact)

<a name="general-information"></a>

## General Information
A simple program to implement K-Nearest Neighbor algorithm. The program will randomly generate 1000 data points with 2 features (x and y). The program will then ask user input for X and Y value that want to be assigned as pivot point. After that, the program will ask user input for K value. The program will then calculate the distance between the pivot point and all the data points. The program will then sort the data points based on the distance from the pivot point. The program will then show the K nearest data points to the pivot point. This program is made for GIK research program - ML Topics at Week01-March.

<a name="creator-information"></a>

## Creator Information

| Nama                        | NIM      | E-Mail                      |
| --------------------------- | -------- | --------------------------- |
| Mohammad Rifqi Farhansyah   | 13521166 | 13521166@std.stei.itb.ac.id |

<a name="features"></a>

## Features
- Generate `1000 data points` with 2 features (x and y)
- Ask user input for `X` and `Y` value that want to be assigned as pivot point
- Ask user input for `K` value
- `Calculate the distance between` the pivot point and all the data points
- `Sort the data points` based on the distance from the pivot point
- Show the `K nearest data points` to the pivot point
- `Visualize the data points and the pivot point` with different color (using GNUPlot)

<a name="technologies-used"></a>

## Technologies Used
- MingGw-W64 version 8.1.0

> Note: The version of the libraries above is the version that we used in this project. You can use the latest version of the libraries.

<a name="setup"></a>

## Setup
1. Download the MingW-W64 from [here](https://sourceforge.net/projects/mingw-w64/files/).
2. Install the MingW-W64.

<a name="usage"></a>

## Usage
1. Open the terminal in the project directory.
2. `cd output` and then `k_nearest_neighbor.exe` to run the program.
3. Input the X and Y value that want to be assigned as pivot point.
4. Input the K value.
5. The program will then calculate the distance between the pivot point and all the data points.
6. Program will sort the data points based on the distance from the pivot point.
7. KNN Simple Program will output the K nearest data points to the pivot point.
8. The program will then visualize the data points and the pivot point with different color (using GNUPlot).


<a name="screenshots"></a>

## Screenshots
<p>
  <img src="/image/SS1.png/">
  <p>Figure 1. Main Menu</p>
  <nl>
  <img src="/image/SS2.png/">
  <p>Figure 2. Nearest Points Output</p>
  <nl>
  <img src="/image/SS3.png/">
  <p>Figure 3. Visualization of The Points</p>
  <nl>
</p>

<a name="structure"></a>

## Structure
```bash
│   Doc.docx
│   gnu_plot_script.plt
│   k_nearest_neighbour.cpp
│   README.md
│
├───.vscode
│       c_cpp_properties.json
│       launch.json
│       settings.json
│
├───image
│       SS1.png
│       SS2.png
│       SS3.png
│
└───output
        k_nearest_neighbour.exe
        near_points_file.txt
```

<a name="project-status">

## Project Status
Project is: _complete_

<a name="room-for-improvement">

## Room for Improvement
Room for Improvement:
- Optimalization of the KNN algorithm
- Add more features

<a name="acknowledgements">

## Acknowledgements
- Thanks To Allah SWT

<a name="contact"></a>

## Contact
<h4 align="center">
  Contact Me : mrifki193@gmail.com<br/>
  2023
</h4>
<hr>
