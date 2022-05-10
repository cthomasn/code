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

function displayMenu()
    log("+-----------------------------------+")
    log("| Welcome, " .. os.date())
    log("+-----------------------------------+")
    log("| 1. Generate random enemy position.")
    log("| 2. Distance from enemy to player.")
    log("| 3. Get angle from enemy to player.")
    log("| 4. Exit.")
    log("+-----------------------------------+")
end

function getDistance(x1, y1, x2, y2)
    return math.sqrt((x1 - x2)^2 + (y1 - y2)^2)
end

function log(x)
    print(x)
end

function s7Loops()

    -- This is to generate a different random seed upon each execution
    math.random(os.time())

    -- set the position of the player character

    local player = {x = 400, y = 300}
    local enemy = {x = 0, y = 0}

    local num_enemies = 0

    while num_enemies < 20 do
        enemy.x = math.random(0,800)
        enemy.y = math.random(0,600)

        if (player.x == enemy.x and player.y == enemy.y) then
            log("Enemy and player position clashed!")
        else

            log("Enemy " .. (num_enemies + 1) .. "'s position: (" .. enemy.x .. "," .. enemy.y .. ")")
            
            -- increment number of enemies
            num_enemies = num_enemies + 1
        end

    end

    -- this only prints when not declared as local
    -- log("ENEMY.X: " .. enemy.x)
end

----------------------------------------------------------------------------------------------------------------- 
function s7UserInput()
    local player = {x = 400, y = 300}
    local enemy = {x = 0, y = 0}

    -- initializing user_input to 0 gurantees we enter the loop
    local user_input = 0

    while user_input ~= 4 do 
        displayMenu()
        -- read user input from the keyboard
        log("\nPlease select your option:")

        user_input = io.read("*n")

        if user_input == 1 then
            enemy.x = math.random(0,800)
            enemy.y = math.random(0,600)
            log("New enemy position at: (" .. (enemy.x) .. "," .. (enemy.y) .. ")")
        end

        if user_input == 2 then
            local d = getDistance(enemy.x, enemy.y, player.x, player.y)
            print("Distance from enemy to player: " .. d)
        end

        if user_input == 3 then
            local a = math.atan((enemy.y - player.y), (enemy.x - player.x))
            log("Angle between the enemy and the player: " .. math.deg(a) .. " degrees.")
        end

    end

    log("Thank you, goodbye!")
end

function main()
    -- s7Loops()
    s7UserInput()
end


main()












