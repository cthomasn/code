--[[
*
*    Author: Christine "NED" Thomas
*    Date: 12/1/21
*    Purpose: Document learnings from Lua Scripting: 
*    Master complete Lua Programming from Scratch.
*
*    TODO: Make a code snippet to auto-complete 'function' keyword 
*    with an 'end' after hitting 'Enter'
*
]]


local meta = {}
local vector3d = {}

function vector3d.new(x, y, z)
    local v = {x = x, y = y, z = z}
    setmetatable(v, meta)
    return v
end

function vector3d.add(v1, v2)
    return vector3d.new(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z)
end
meta.__add = vector3d.add

function vector3d.tostring(v)
    return "(".. v.x ..", ".. v.y .. ", " .. v.z .. ")"
end
meta.__tostring = vector3d.tostring
-------------------------------------
position = vector3d.new(5.0, 5.0, 5.0)
velocity = vector3d.new(10.0, -3.5, 0.0)

local result = velocity + position

print(position)
print(velocity)
print(result)

BankAccount = {
    accountNumber = 0,
    holderName = "",
    balance = 0.0
}

function BankAccount:deposit(amount)
    self.balance = self.balance + amount
end

function BankAccount:withdraw(amount)
    self.balance = self.balance - amount
end

function BankAccount:new(t)
    t = t or {}
    setmetatable(t, self)
    self.__index = self
    return t
end

-- Create an object

matvey = BankAccount:new({
    accountNumber = 42069,
    holderName = "Matvey Petrovsky",
    balance = 0.0
})

print("New account object...")
matvey:deposit(1000)
matvey:withdraw(50)
print(matvey.holderName .. ": " .. matvey.balance)

nat = BankAccount:new({})

print(nat.balance)























