# CIS165_Lab4-

| Program and test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Average, assigned values | 28, 32, 37, 24, 33 | sum = 154, average = 30.8 | sum = 154, average = 30.8 | Match |
| Average, changed values | 17, 38, 89, 67, 45 | sum = 256, average = 51.2 | sum = 256, average = 51.2 | Match |
| Ocean, assigned rate | 1.5 | 7.5, 10.5, 15 mm | 7.5, 10.5, 15 mm | Match |
| Ocean, changed rate | 3.5 | 17.5, 24.5, 35 mm | 17.5, 24.5, 35 mm | Match |

Questions (Explaining the code):
1. Why should the five values and the average use the double data type?
The five values and the average use the double data type to make sure the answer is accurate and the output is a decimal. It doesn't use float because it holds fewer digits of precision than a double. If int had been used the answer of 154/5 would have been 30 not 30.8
2. Trace the assigned values through sum and average.
  The five values(28,32,37,24, and 33) are stored un five double variables. They get added together and stored in sum, which is 154. Then, sum is divided my 5 and stored in average, which gives 30.8. Then, bouth sum and averag are printed with labels.
3. Why should the average calculation divide the completed sum rather than only the final value?
  An average is the total of all the values divided by how many values there are. If I wrote value1 + value2 + value3 + value4 + value5 / 5, C++ would do the division first and only divide the last value (33 / 5), then add that to the others. That gives the wrong answer. Storing the full sum first and then dividing it by 5 gives the correct 30.8.
4. Explain how the ocean-level calculations use the annual rate and number of years.
  The annual rate (1.5 millimeters per year) is stored in a constant. Each result is the number of years multiplied by that rate. For example, 5 years times 1.5 gives 7.5 millimeters. The same rate is used for 7 years (10.5 millimeters) and 10 years (15 millimeters), and each result is stored in its own variable before being printed.
5. Why is the annual ocean-level rate a good candidate for a named constant?
The same rate is used in all three calculations, and it’s a fixed value that shouldn’t change while the program runs. With a named constant, I only have to change it in one place if the rate changes, instead of editing three formulas. When I tested a rate of 3.5, I only had to change one line. The name ANNUAL_RISE_MM also tells the reader what the number means, which a bare 1.5 doesn’t.

6. Why does the assignment require calculations to be stored before using cout?
Storing the result in a variable first keeps the calculation separate from the display, which makes the code easier to read and check. If something is wrong, I can see whether the math or the output is the problem. It also means I can reuse the result later without redoing the calculation, and the cout lines stay short and simple.
