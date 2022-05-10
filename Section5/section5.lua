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

log("\nConditionals: Elseif using ENUMs")
log("\n\t\t WOLFENSTEIN")
log("\n\t\t MAIN MENU")
log("\n\t\t > New Game.")
log("\n\t\t > Select Gameplay Difficulty.")
log(" \n\t\t Can I play Daddy?\n\t\t\tEASY: For those who need their hand held.")
log(" \n\t\t Don't hurt me.\n\t\t\tMEDIUM: For those with experience playing first-person shooters.")
log(" \n\t\t Bring 'em on!\n\t\t\tHARD: For adrenaline junkies.")
log(" \n\t\t I am Death Incarnate!\n\t\t\tINSANE: For those who have a devil-take-me play style. Be warned: He will. >:)")


MENU = {}

MENU.DIFFICULTY_SETTING = {
    EASY = 1,
    MEDIUM = 2,
    HARD = 3,
    INSANE = 4
}

menu_option = MENU.DIFFICULTY_SETTING.INSANE

if menu_option == 1 then
   difficulty_selected = "EASY."
elseif menu_option == 2 then
    difficulty_selected = "MEDIUM."
elseif menu_option == 3 then
    difficulty_selected = "HARD."
elseif menu_option == 4 then
    difficulty_selected = "INSANE."
end

log("\n\t\t >>> Difficulty selected: " .. difficulty_selected)

log("\nAlternative to Section 5 Exercise 1 using tables to sorta mimic ENUMs... or is this classes?")

log("\n\t\tSTREET FIGHTER")
log("\n\t\tCHOOSE YOUR FIGHTER!")
log("\n\t\t\t   RYU")
log("\n\t\t\t   CHUN-LI")
log("\n\t\t\t   GUILE")
log("\n\t\t\t   HONDA")
log("\n\t\t\t   KEN")
log("\n\t\t\t   BLANKA")

-- clearing the global menu table for use in a separate 'game'
MENU = {}

MENU.CHARACTER_SELECT = {
--[[1]]    {"Ryu", "Shinku Hadouken!"},
--[[2]]    {"Chun-Li", "Lightning kick!"},
--[[3]]    {"Guile", "Sonic boom!"},
--[[4]]    {"Honda", "Hundred Hand Slap!"},
--[[5]]    {"Ken", "Hadouken!"},
--[[6]]    {"Blanka", "Electric Shock!"}
}

character_selected = MENU.CHARACTER_SELECT[5]

-- Ryu selected
if character_selected == MENU.CHARACTER_SELECT[1] then
    fighter_name = MENU.CHARACTER_SELECT[1][1]
    special_move = MENU.CHARACTER_SELECT[1][2]

-- Chun Li selected
elseif character_selected == MENU.CHARACTER_SELECT[2] then
    fighter_name = MENU.CHARACTER_SELECT[2][1]
    special_move = MENU.CHARACTER_SELECT[2][2]

-- Guile selected
elseif character_selected == MENU.CHARACTER_SELECT[3] then
    fighter_name = MENU.CHARACTER_SELECT[3][1]
    special_move = MENU.CHARACTER_SELECT[3][2]

-- Honda selected
elseif character_selected == MENU.CHARACTER_SELECT[4] then
    fighter_name = MENU.CHARACTER_SELECT[4][1]
    special_move = MENU.CHARACTER_SELECT[4][2]

-- Ken selected
elseif character_selected == MENU.CHARACTER_SELECT[5] then
    fighter_name = MENU.CHARACTER_SELECT[5][1]
    special_move = MENU.CHARACTER_SELECT[5][2]

-- Blanka selected
elseif character_selected == MENU.CHARACTER_SELECT[6] then
    fighter_name = MENU.CHARACTER_SELECT[6][1]
    special_move = MENU.CHARACTER_SELECT[6][2]
end

print("\n\t\t >>> Fighter selected: " .. fighter_name..". Special move: "..special_move)