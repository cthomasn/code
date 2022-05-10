--[[
*
*    Author: Christine "NED" Thomas
*    Date: 11/25/21
*    Purpose: Practice for Section 7 of the 
*    the Udemy course Lua Scripting:
*    Master complete Lua Programming
*    from scratch.
*
]]
----------------------------------------------------------------------------------

--- This function takes the parameter 'x', which is a floating point number, 
    -- gets the math.floor() value of it, and concatenates it with a ".0" to 
    -- see if it matches the original variable. If it does we return the 
    -- math.floor() value of 'x', else we return the original value of 'x' 
    -- that was passed in. This is to ensure we are not taking the 
    -- math.floor() values of floating point numbers greater than 'x.0.'
    -- @param x - floating point number
    -- @usage exercise1()
function floatWholeNumber(x)

    if (tostring(x) == (tostring(math.floor(x)) .. ".0")) then 
        x = math.floor(x)
    end

    return x
end

----------------------------------------
-- Exercise 1:
----------------------------------------
--[[
    Create a script in Lua that 
    outputs the average of all numbers 
    the user inputs, stopping user input
    collection upon the user entering
    "0".
]]
----------------------------------------

function exercise1()
    local user_input = nil
    local sum = 0
    local count = 0

    print("Exercise 1:")

    -- check if this needs an if statement by changing the exit code to a non-zero number
    while user_input ~= 0 do
        print("Enter a number (or 0 to exit):")
        user_input = io.read("*n")

        if user_input ~= 0 then
            sum = sum + user_input
            count = count + 1
        end

    end

    -- For debugging purposes
    -- print("Sum is: " .. sum)
    -- print("Count is: " .. count)

    local avg = (sum / count)


    average = floatWholeNumber(avg)

    if count > 1 then
        print("\nThe average of these " .. count .. " numbers is " .. average .. "." )
    elseif count == 1 then
        print("\nThe average of this " .. count .. " number is " .. average .. "." )
    else 
        print("\nThank you, goodbye!")
    end

end

----------------------------------------
-- Exercise 2:
----------------------------------------
--[[
    Create a Lua script that displays 
    all integer numbers between 1000 
    and 1, in descending order.
]]
----------------------------------------

function exercise2()
    print("\nExercise 2:")
    for i = 10, 1, -1 do
        print(i)
    end
end

----------------------------------------
-- Exercise 3:
----------------------------------------
--[[
    Create a Lua script that displays 
    20 random numbers between 1 and 6.
]]
----------------------------------------

function exercise3()
    -- generate random seed
    math.random(os.time())

    print("\nExercise 3:")
    for i = 1, 20 do
        print("Index " .. i .. ": " ..math.random(1, 6))
    end
end

----------------------------------------
-- Exercise 4:
----------------------------------------
--[[
    Create a Lua script that displays 
    100 random numbers between 1 and 6. 
    At the end, the script should 
    display a summary of how many 1’s, 
    2’s, 3’s, 4’s, 5’s, and 6’s were 
    picked.
]]
----------------------------------------

function exercise4()
    --generate random seed
    math.random(os.time())

    local num_ones, num_twos, num_threes, num_fours, num_fives, num_sixes = 0, 0, 0, 0, 0, 0
    for i = 1, 10 do
        local random_number = math.random(1, 6)

        if random_number == 1 then
            num_ones = num_ones + 1
        elseif random_number == 2 then
            num_twos = num_twos + 1
        elseif random_number == 3 then
            num_threes = num_threes + 1
        elseif random_number == 4 then
            num_fours = num_fours + 1
        elseif random_number == 5 then
            num_fives = num_fives + 1
        else
            num_sixes = num_sixes + 1
        end
    end

    print("\nExercise 4:\nNumber of 1's, 2's, 3's, 4's, 5's, and 6's, respectively:\n" .. 
            num_ones .. ", " .. num_twos .. ", " .. num_threes .. ", " .. 
            num_fours .. ", " .. num_fives .. ", " .. num_sixes .. ".")
end

----------------------------------------
-- Exercise 5:
----------------------------------------
--[[
    Create a Lua script that initializes 
    a variable with a currency number 
    value in dollars. The script should 
    break down the value in the optimal 
    number of currency notes that are 
    needed to represent that value. The 
    available notes are 100, 50, 20, 10, 
    5, and 1 dollar notes. For example, 
    to represent 689 dollars we need:

    * 6 notes of 100 dollars

    * 1 note of 50 dollars

    * 1 note of 20 dollars

    * 1 note of 10 dollars

    * 1 note of 5 dollars

    * 4 notes of 1 dollar
]]
----------------------------------------
-- TODO:
function exercise5()
    -- Initialize the currency amount
    total = 689 

    -- Get the integer part of the division and the remainder
    number_of_100 = total // 100
    remainder_100 = total % 100

    number_of_50 = remainder_100 // 50
    remainder_50 = remainder_100 % 50

    number_of_20 = remainder_50 // 20
    remainder_20 = remainder_50 % 20

    number_of_10 = remainder_20 // 10
    remainder_10 = remainder_20 % 10

    number_of_5 = remainder_10 // 5
    remainder_5 = remainder_10 % 5

    number_of_1 = remainder_5

    -- Display the number of notes for 100, 50, 20, 10, 5, and 1
    print("\nTotal of 100 notes: "..number_of_100)
    print("Total of  50 notes: "..number_of_50)
    print("Total of  20 notes: "..number_of_20)
    print("Total of  10 notes: "..number_of_10)
    print("Total of   5 notes: "..number_of_5)
    print("Total of   1 notes: "..number_of_1)
end

----------------------------------------
-- Exercise 6:
----------------------------------------
--[[
    Create a simple Lua script that 
    inverts all the words in a sentence. 
    For example:

    * Input: “The quick fox jumps over 
              the lazy dog”

    * Output: “dog lazy the over jumps 
               fox quick The”
]]
----------------------------------------
-- TODO:
function exercise6()
    -- Initialize a sentence
    text = "The quick fox jumps over the lazy dog."

    -- Split string and return a list of words
    words = string.gmatch(text, "%S+")

    result = ""

    -- Loop all words adding each word to the beginning of the final result string
    for word in words do
    result = word.." "..result
    end

    -- Display the final inverted result sentence
    print("\nInverted sentence: "..result)
end

----------------------------------------
-- Exercise 7:
----------------------------------------
--[[
    Create a simple Lua function that 
    receives five parameters and returns 
    the result of the average of these 
    five values.
]]
----------------------------------------

function averageOfNumbers(a, b, c, d, e)

    return (a + b + c + d + e) / 5

end
----------------------------------------
-- Exercise 8:
----------------------------------------
--[[
    Create a Lua function called 
    studentPassed() that also receives 
    five parameters representing the 
    five marks scored by a student in a 
    quiz. The function should calculate 
    the overall average of all marks 
    and return true if the student 
    passed (average greater or equal 
    to 70) or false if the student 
    failed (average less than 70).
]]
----------------------------------------

function studentPassed(a, b, c, d, e)
    
    average = (a + b + c + d + e) / 5

    if average >= 70 then
        student_passed = true
    else
        student_passed = false
    end

    local message = "student_passed: " .. tostring(student_passed)

    return message
end

----------------------------------------
-- Exercise 9:
----------------------------------------
--[[
    Create a Lua function that returns 
    if a number is inside a given 
    range. The function should receive 
    three parameters. For example, 
    valueInRange(5, 2, 12) 
    should return true, since 5 is 
    between 2 and 12.
]]
----------------------------------------

function valueInRange(x, y ,z)

    
    if x >= y and x <= z then
        in_range = true
    else
        in_range = false
    end

    local message = "in_range: " .. tostring(in_range)

    return message
end

----------------------------------------
-- Exercise 10:
----------------------------------------
--[[
    Create a simple Lua function that 
    receives a temperature value in 
    Celsius as a parameter and returns 
    the value converted to Fahrenheit. 
    The conversion formula is listed 
    below:

    * TF = ((9/5) * TC) + 32
]]
----------------------------------------

function celsiusToFahrenheit(TC)
    TF = ((9/5) * TC) + 32
    -- conversion = tostring(TC .. " degrees Celsius is " .. 
    --              TF .. " degrees Fahrenheit.")
    return TF
end
----------------------------------------
-- Exercise 11:
----------------------------------------
--[[
    Create a simple Lua function that 
    receives as a parameter the values 
    of two rectangles (x1, y1, width1, 
    height1, x2, y2, width2, height2) 
    and returns true or false if the 
    two rectangles are colliding with 
    each other or not. This simple 
    collision test falls under what we 
    call AABB (axis-align bounding box). 
    Think of what are the conditions 
    that need to be true for us to 
    safely tell that the first 
    rectangle is colliding with 
    the second one.
]]
----------------------------------------
-- TODO:
-- Function to test if rectangle 1 is colliding with rectangle 2
function is_colliding(x1, y1, w1, h1, x2, y2, w2, h2)
    if (x2 >= x1 + w1) or 
       (x2 + w2 <= x1) or 
       (y2 >= y1 + h1) or 
       (y2 + h2 <= y1)
    then
      return false
    else
      return true
    end
  end
  
  -- Call the function with some values to test
  if is_colliding(10, 10, 20, 8, 12, 13, 20, 6) then
    print("Rectangles are colliding.")
  else
    print("Rectangles are not colliding.")
  end
  
---------------------------------------------------------------------------------------
-- END OF EXERCISES
---------------------------------------------------------------------------------------

function main()
    
    -- exercise1()
    -- exercise2()
    -- exercise3()
    -- exercise4()
    -- exercise5()
    -- exercise6()
    
    -- NOTE: Functions with return values won't print just by calling them, you must
    -- explicitly print() it.

    -- TODO: ALL of these functions could be coded better.
    -- avg = averageOfNumbers(1,2,3,4,5)
    print("Average is: " .. floatWholeNumber(averageOfNumbers(1, 2, 3, 4, 10)))

    print(studentPassed(90, 40, 95, 60, 55))
    print(valueInRange(7, 5, 10))
    print(floatWholeNumber(celsiusToFahrenheit(0)) .. " degrees Fahrenheit.")
end

main()