--[[
*
*    Author: Christine "NED" Thomas
*    Date: 11/19/21
*    Purpose: Document learnings from Lua Scripting: 
*    Master complete Lua Programming from Scratch.
*
*    TODO: Make a code snippet to auto-complete 'function' keyword 
*    with an 'end' after hitting 'Enter'
*
]]

function log(x)
    print(x)
end

log("Hello World!")
log(12 * 45)
log("Thank you, goodbye!\n")

log("Examples of variables.")

score = 0       
lives = 3
player1 = "Leeroy Jenkins"
player2 = "Christine Thomas"

log("Type of of score's value: "..type(score))

hourly_wage = 25 / 2
log("Value of hourly_wage with one '/': "..hourly_wage)

hourly_wage = 25 // 2
log("Value of hourly_wage with two '/': "..hourly_wage)

log("Name of player1 is: "..player1)

log("\nIncrementing and Decrementing variables.")
level = 1
score = 0
num_lives = 5

level = level + 1
log("Level: " .. level)

num_lives = num_lives - 1
log("Lives: " .. num_lives)


-- NOTES:
-- Lua is a dynamically-typed language. Variables do not have type definitions,
-- but the values of variables come in certain 'types'. The 8 different value types are: 
-- Strings, numbers, booleans, tables, nil, function, userdata, and thread. (?)
-- Standard Lua represents numbers (integers and floats) as 64-bits.



-- local a = 10
-- for some reason you can't do this without it wrapped in a print statement or
-- stored in a variable
-- a * 2

-- log(a * 2)
-- b = a * 2
-- log("This is the value of b: " .. b .. "\n")



-- function main()
   
-- end

-- main()