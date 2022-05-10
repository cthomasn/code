--[[
*
*    Author: Christine "NED" Thomas
*    Date: 11/25/21
*    Purpose: Practice for Section 6 of the 
*    the Udemy course Lua Scripting:
*    Master complete Lua Programming
*    from scratch.
*
]]

----------------------------------------
-- Exercise 1:
----------------------------------------
--[[
    Create a script in Lua that 
    generates three random values 
    between 0 and 255. Each value 
    represents one component from an 
    RGB color. Google what color is 
    generated when we combine the 
    three random values that Lua picked 
    for (R)ed, (G)reen, and (B)lue.
]]
----------------------------------------

math.randomseed(os.time())

R = math.random(0, 255)
G = math.random(0, 255)
B = math.random(0, 255)

print("Exercise 1:\nR: " .. R .. ", G: " .. G .. ", B: " .. B .. ".")

----------------------------------------
-- Exercise 2:
----------------------------------------
--[[
    Create a script that initializes a 
    string value with the email of an 
    user. The program should display if 
    that variable contains a valid 
    email. The requirements for the 
    value to be a valid email are:
]]
----------------------------------------
--[[
    a) The email should contain an “@” 
       character.

    b) The email should contain a “.” 
       character.

    c) The email should not contain any 
       spaces.
]]
----------------------------------------

-- TODO: Use string.match() for real-world results.

-- email = "jak.mar@spargus.com"
email = "jakmar@.gmail.com"

if (string.find(email, "@")) and (string.find(email, ".")) and (not string.find(email, "@.")) then
    print("\nExercise 2:\n" .. email .. " is a valid email address.")
elseif (string.find(email, "@.")) or (string.find(email, " ")) then
    print("\nExercise 2:\n" .. email .. " is an invalid email address.")
end

----------------------------------------
-- Exercise 3:
----------------------------------------
--[[
    Create a script in Lua that 
    initializes a variable with the 
    password string value. The program 
    should display if the password is 
    valid. For a password to be valid, 
    the password should not contain 
    spaces and should have at least 
    6 characters.
]]
----------------------------------------

password = "jakmyman"
-- password = "ennnh pugg"

if  (not string.find(password, " ")) and (#password >= 6) then
    print("\nExercise 3:\nPassword is valid!")
else
    print("\nExercise 3:\nInvalid password.")
end

----------------------------------------
-- Exercise 4:
----------------------------------------
--[[
    Create a Lua script that initializes 
    a variable with a number between 
    1 and 6. The script should also 
    generate a random number between 1 
    and 6 (simulating the roll of a 
    dice). The program should display a 
    message if both numbers are equal or 
    different, meaning that we guessed 
    the random dice roll correctly 
    or not.
]]
----------------------------------------

your_roll = math.random(1, 6) -- or explicity set to number
-- your_roll = 5

machine_roll = math.random(1,6)

print("\nExercise 4:")
print("\nYou: " .. your_roll)
print("\nMachine: " .. machine_roll)

if your_roll == machine_roll then
    print("\nYou and the machine rolled the same number!")
else
    print("\nTry again!")
end