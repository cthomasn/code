--[[
*
*    Author: Christine "NED" Thomas
*    Date: 11/20/21
*    Purpose: Practice for Section 4 of the 
*    the Udemy course Lua Scripting:
*    Master complete Lua Programming
*    from scratch.
*
]]

------------------------------------------
-- Exercise 1:
------------------------------------------
-- Write a Lua program that receives
-- the value of the name and salary
-- of an employee.
-- The program should calculate and
-- display the new salary increased
-- by 15%.
------------------------------------------

name = "Miles Davis"
salary = 500000.00

------------------------------------------
-- TODO: Calculate the new_salary
------------------------------------------
-- this works, but...
-- new_salary = salary + (salary * 0.15)

-- ... there's a better way
new_salary = salary * 1.15
print("The new salary for ".. name .." is $" .. new_salary)

------------------------------------------
-- Exercise 2:
------------------------------------------
-- Initialize a variable with any 
-- temperature value in Celsius. 
-- Your script should calculate and 
-- display the value in Celsius converted 
-- to Fahrenheit. Assuming TC is the 
-- temperature in Celsius and TF is 
-- the temperature in Fahrenheit, the 
-- conversion formula is: 
-- TF = 9/5 * TC + 32
------------------------------------------

degrees_celsius = 9
celsius_to_fahrenheit = ((9/5) * degrees_celsius) + 32

print("Value of " .. degrees_celsius .. " degrees Celsius in Fahrenheit: " .. celsius_to_fahrenheit)

------------------------------------------
-- Exercise 3:
------------------------------------------
-- Create a Lua script to compute and 
-- display the result of how much money 
-- 1000 dollars have grown after three 
-- years with a 5 percent interest rate. 
-- Assuming p is the bank interest rate 
-- in percent per year, A is the initial
-- amount, and n is the number of years, 
-- we can use the formula below to find 
-- the growth of money in the bank:
-- A(1 + p/100)^n
------------------------------------------

bank_apr = 0.05
initial_amount = 1000
number_of_years = 3

monetary_growth = initial_amount * (1 + bank_apr)^number_of_years
print("Monetary growth of $".. initial_amount .. " over " .. number_of_years .. " years at an APR of " .. bank_apr .. "%: $" .. monetary_growth)

------------------------------------------
-- Exercise 4:
------------------------------------------
-- Create a simple script that 
-- initializes a variable with the value 
-- of the length of the radius of a circle. 
-- The script should compute and display 
-- the value of the area of the circle. 
-- For a radius r, the area of a circle 
-- is calculated using the following 
-- formula:
-- Area = pi*r^2
------------------------------------------
radius = 6
area_of_circle = math.floor(math.pi * (radius^2))

print("Area of a circle given a radius of " .. radius .. ": " .. area_of_circle)

-- All good!