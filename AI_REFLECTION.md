# AI Reflection

**Tools used**
I wrote the first versions of both programs myself and ran them in OnlineGDB. After that I used Claude to review my code and README. It pointed out style problems like my lowercase constant name, weak variable names, and it helped format my table in a better way and I learned and edited that.

**One decision**
I chose `const double` for the ocean rate and `double` instead of `int` for the values. With `int`, 1.5 would be cut to 1 and the average of 154 / 5 would come out as 30 instead of 30.8. Claude suggested renaming my constant from `rise` to `ANNUAL_RISE_MM` to follow the ALL_CAPS rule, and I accepted that. I also changed my variable names, like x1 to value1.

**Verification**
I calculated the expected results by hand before running anything: sum 154 and average 30.8, then 7.5, 10.5, and 15 millimeters. My output matched. I repeated the tests with different values (17, 38, 89, 67, 45 and a rate of 3.5) and those matched too.

**Learning**
I can now store calculations in variables before printing them, and I understand why `const` and `double` fit these programs. I still need to practice how to name my variables correctly so they are understood easily by me and others. I still need to practice how to write the code I broke down in my head on paper or readme.
