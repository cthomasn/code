--[[
*
*    Author: Christine "NED" Thomas
*    Date: 12/1/21
*    Purpose: Practice for Section 8 of the 
*    the Udemy course Lua Scripting:
*    Master complete Lua Programming
*    from scratch.
*
]]
------------------------------------
-- Exercise 1: Metatables
------------------------------------
--[[
    Create metamethods for arithmetic 
    operations on two vectors.
]]
-------------------------------------

-------------------------------------
-- Declare a new vector3d constructor
-------------------------------------
local meta = {}
local vector3d = {}

function vector3d.new(x, y, z)
    local v = {x = x, y = y, z = z}
    setmetatable(v, meta)
    return v
end

----------------------------------------
-- Functions to work as metamethods
----------------------------------------

-- Addition
function vector3d.add(v1, v2)
    return vector3d.new(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z)
end
meta.__add = vector3d.add -- bind the function to the metamethod

-- Subtraction
function vector3d.sub(v1, v2)
    return vector3d.new(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z)
end
meta.__sub = vector3d.sub -- bind the function to the metamethod

-- Multiplication
function vector3d.mul(v1, v2)
    return vector3d.new(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z)
end
meta.__mul = vector3d.mul -- bind the function to the metamethod

-- Division
function vector3d.div(v1, v2)
    return vector3d.new(v1.x / v2.x, v1.y / v2.y, v1.z / v2.z)
end
meta.__div = vector3d.div -- bind the function to the metamethod

-- tostring()
function vector3d.tostring(v)
    return "(".. v.x ..", ".. v.y .. ", " .. v.z .. ")"
end
meta.__tostring = vector3d.tostring -- bind the function to the metamethod

---------------------------------------
-- Create two vector3d tables
---------------------------------------
position = vector3d.new(5.0, 5.0, 5.0)
velocity = vector3d.new(10.0, -3.5, 0.0)

-----------------------------------------
-- Perform arithmetic on the two vectors
-----------------------------------------
local result_add = velocity + position
local result_sub = velocity - position
local result_mul = velocity * position
local result_div = velocity / position

-----------------------------------------
-- Print the vectors using tostring
-----------------------------------------
print("Velocity vector:"..tostring(velocity))
print("Position vector: "..tostring(position))

print("\nAdding velocity and position vectors together: ")
print("Position + Velocity: "..tostring(result_add))

print("\nSubtracting velocity and position vectors together: ")
print("Position - Velocity: "..tostring(result_sub))

print("\nMultiplying velocity and position vectors together: ")
print("Position * Velocity: "..tostring(result_mul))

print("\nDividing velocity and position vectors together: ")
print("Position / Velocity: "..tostring(result_div))

-------------------------------------------
-- Exercise 2: Object-Oriented Programming
-------------------------------------------

local Fighter = {
    name = "",
    country = "",
    specialAttack = "",
    difficultyLevel = {
        EASY = "Beginner",
        MEDIUM = "Intermediate",
        HARD = "Champion"
    }
}

function Fighter:lightPunch()
    print(self.name .. " attacks with light punch!")
end

function Fighter:strongPunch()
    print(self.name .. " attacks with strong punch!")
end

function Fighter:lightKick()
    print(self.name .. " attacks with light kick!")
end

function Fighter:heavyKick()
    print(self.name .. " attacks with heavy kick!")
end

function Fighter:attackMove()
    print(self.name .. " attacks with attack move!")
end

function Fighter:new(t)
    t = t or {}
    setmetatable(t, self)
    self.__index = self
    return t
end

-- Create Objects

chunLi = Fighter:new({
    name = "Chun-Li",
    country = "China",
    specialAttack = "Lightning Kick",
    difficultyLevel = Fighter.difficultyLevel.EASY
})

print("\n" .. chunLi.name .. " is a fighter from " .. chunLi.country .. 
".\nShe is best suited for " .. chunLi.difficultyLevel .. "s and her Special is the " 
.. chunLi.specialAttack .. "!")
------------------------------------
-- END
------------------------------------