# CIS165_Lab4-

Program and test	  Values used	        Expected results	                     Actual results	             Match or correction
Average —     	28, 32, 37, 24, 33	 sum = 154 average = 30.8	               sum = 154 average = 30.8             Match
assigned values
Average —      	17, 38, 89, 67, 45	 sum = 256 average = 51.2	               sum = 256 average = 51.2             Match
changed values
Ocean —               	1.5        5 yrs = 7.5 7 yrs = 10.5 10 yrs = 15 ,  5 yrs = 7.5 7 yrs = 10.5 10 yrs = 15   Match
assigned rate
Ocean —               	3.5        5 yrs = 17.5 7 yrs = 24.5 10 yrs = 35 , 5 yrs = 17.5 7 yrs = 24.5 10 yrs = 35    Match
changed rate

Questions (Explaining the code):
1. Why should the five values and the average use the double data type?
The five values and the average use the double data type to make sure the answer is accurate and the output is a decimal. It doesn't use float because the answer can be more than 4 bits.
2. Trace the assigned values through sum and average.
First the values are assigned to a variable. The sum of all the variables is then assigned to another variable called "sum". "sum" is then divided by the "5"and is assigned to a variable called "average" and then both variables "sum" and "average" is sent to the output.
3. Why should the average calculation divide the completed sum rather than only the final value?
Because an average is a sum of all the included values divided by the number of values.
4. Explain how the ocean-level calculations use the annual rate and number of years.
The annual rate is a constant variable that does not change throughout the code. It is then multiplied to the variables assigned to the number of years and then sent to output.
5. Why is the annual ocean-level rate a good candidate for a named constant?

Why does the assignment require calculations to be stored before using cout?
