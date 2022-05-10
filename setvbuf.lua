
-- -- local file = io.output("test.txt")

-- local fileName = "test.txt"

-- local file = assert(io.open(fileName, "w"), "File not opened.")

-- file:setvbuf("line", 2) -- never works on size = 1. Seems to work as intended when size == 2 and size < 6. for file:write(" \n" .. " \n")

-- -- file:write(" \n" .. " \n")
-- file:write("Are you angels,\ncuz...")

-- -- io.output():write("Are you angels,\ncuz...")

-- -- io.write("Are you angels,\ncuz...")

-- io.close()


-- file = io.open(fileName, "r")

-- io.input(fileName)

-- local contents = file:read("*a")

-- print("The contents of the file: " .. contents)

-- local lineCounter = 0
-- for line in io.lines(fileName) do
--     lineCounter = lineCounter + 1
-- end

-- print(lineCounter)

-- io.close()

-- assert(lineCounter == 2)

-- local fileName = "tt.txt"
-- local file = io.open(fileName, "w")

local fileName = "test.txt"
local file = io.open(fileName, "r")
io.input(fileName)

io.output():setvbuf("full", 2)

function wait(seconds)
    local start = os.time()
    repeat until os.time() > start + seconds
end

local lines = {}
local a = 0
for line in io.lines(fileName) do
    lines[a] = line
    a = a + 1
end

local i = 0
local b = 0

local stop = os.time() + 20
while not (os.time() >= stop) do
    i = i + 1
    io.output():write('hihihihihi34h\nihihihihihihi45' .. tostring(i))
    wait(0.01)
    -- for b = 0, 1, 1 do
    -- io.output():write(lines[b])
    -- wait(2)
    -- end
end

