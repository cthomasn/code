--[[
*
*    Author: Christine "NED" Thomas
*    Date: 11/25/21
*    Purpose: Practice for Section 5 of the 
*    the Udemy course Lua Scripting:
*    Master complete Lua Programming
*    from scratch.
*
]]

----------------------------------------
-- Exercise 1:
----------------------------------------
-- Display the correct name of the
-- attack "move" based on the name of
-- the game character.
----------------------------------------
-- Name: Ryu     -> Hadouken
-- Name: Chun-Li -> Lightning kick
-- Name: Guile   -> Sonic boom
-- Name: Honda   -> Hundred Hand Slap
-- Name: Ken     -> Hadouken
-- Name: Blanka  -> Electric shock
----------------------------------------

fighter_name = "Ken"

----------------------------------------
-- Select the correct attack move
----------------------------------------
if string.lower(fighter_name) == "ryu" or 
   string.lower(fighter_name) == "ken"  then
    attack_move = "Hadouken!"
elseif string.lower(fighter_name) == "chun-li" then
    attack_move = "Lightning kick!"
elseif string.lower(fighter_name) == "guile" then
    attack_move = "Sonic boom!"
elseif string.lower(fighter_name) == "honda" then
    attack_move = "Hundred Hand Slap!"
elseif string.lower(fighter_name) == "blanka" then
    attack_move = "Electric Shock!"
end

print("Exercise 1: "  .. fighter_name .." attacks with ".. attack_move)

---------------------------------------
-- Exercise 2:
----------------------------------------
-- Create a Lua script that initializes 
-- a variable with the age of the user. 
-- The program should display a message 
-- saying if the user is legally allowed 
-- to vote and/or drink according to the 
-- current laws of Brazil. A person 
-- needs to be at least 16 years old to 
-- vote in Brazil, and at least 18 years 
-- old to drink.
----------------------------------------

local user_age = 23

if user_age >= 16 and user_age >= 18 then
    print("Exercise 2: You can vote and drink in Brazil.")
elseif user_age >= 16 and user_age < 18 then
    print("Exercise 2: You can vote, but not drink in Brazil.")
else
    print("Exercise 2: You can neither vote nor drink in Brazil.")
end

---------------------------------------
-- Exercise 3:
----------------------------------------
-- Create a script that initializes a 
-- variable with the current salary of 
-- an employee and another variable with 
-- how many years that employee works 
-- at the company. The program should 
-- calculate and display the bonus that 
-- the employee is entitled to get. 
-- The bonus is calculated based on a 
-- percentage of the employee’s salary, 
-- and the percentage depends on how 
-- long the employee works at the 
-- company. If an employee works more 
-- than 5 years for the company, the 
-- bonus is 10% of the salary. If the 
-- employee works less than 5 years, 
-- the bonus is 7% of the salary.
----------------------------------------

local current_salary = 150000
local years_worked = 0.5

if years_worked > 5 then
    bonus = 0.05
    salary_with_bonus = current_salary * (bonus + 1)
elseif years_worked < 5 then
    bonus = 0.07
    salary_with_bonus = current_salary * (bonus + 1)
end

print("Exercise 3: You have worked at the company for " .. years_worked .. " years and your current salary is $" 
.. current_salary .. ".\nTherefore, based on the number of years you have been employed, you are entitled to a bonus of "
.. math.floor(bonus * 100) .. "%. " .. "\nYour new salary with the bonus included will be: $" .. math.floor(salary_with_bonus) .. ".")