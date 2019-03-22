# average-with-pointers

In this repo, I have included both the source file that makes up the program and the executable that should allow you to run the program without having to have a compiler for the source file. Just double click the executable to run it.

This is a recent project that I have had to complete for my c++ coding class. In this project, I had to get to my goal by using almost only pointers. Pointers are a way to reference back to a certain piece of data that is processed at some point in your program.

In the lines of the program leading up to the important part of the program, we use the "#include" operator to import the ability to ask a user questions or give statements and then store potential inputs from said user. After this we then define one of our functions with some dereferenced intergers that will be used later on.

After this, we move onto our main function. This is where most of the important things go on. We first define integers "b", "i", and "sum" all with an amount that is able to be adjusted as we may need. We then move on to ask the user for a series of numbers that they may need the average of. It can be any length of numbers, but once a zero or negative number is entered, the program will just to its conclusion. After the string of numbers is entered, the amount of numbers is put into a sequence that is added together and totaled, then transferred into the getAvg function. The two integers that are being included with the calling of the getAvg function, sum and i, are to be passed along to the actual function.

Once we are onto the getAvg function, the previously mentioned sum and i integers are having their information passed onto the total and nums integers. After this nothing to complex happens. Since now the total integer has the sum of every number that the user had entered earlier and the nums integer has the count of how many individual numbers, we can divide total by nums to get the average, which is stored in the integer avg. After this we use just simply print out the average of the user entered numbers, then the program terminates and you are at the end of what can be done with this program.
