--[[
*
*    Author: Christine "NED" Thomas
*    Date: 11/25/21
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

log("String Manipulation.")

color = "#213d85ff"

-- substitute all occurences of # with nothing
-- pure_color = string.upper(string.gsub(color, "#", ""))

pure_color = string.sub(color, 2, #color)
log("Pure color: " .. pure_color)

email = "jakmar@spargus.com"
-- email = "jakmargmail.com"

if string.find(email, "@") then
    log(email .. " is a valid email address.")
else
    log(email .. " is invalid.")
end

log("\nMultiple Assignment.")
x, y = 3, 7
x, y = y, x

log("x: " .. x .. " y: " .. y)

log("\nStandard Library Modules.")
log("\nGetting a random enemy position in a 800x600 resolution screen.")

-- This is to generate a different random seed upon each execution
math.random(os.time())

enemy_x = math.random(0,800)
enemy_y = math.random(0,600)

log("Enemy position: (" .. enemy_x .. "," .. enemy_y .. ")")









