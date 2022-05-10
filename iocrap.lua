function test()

    local fileName = "io.txt"
    local text = "Does this work?"

    io.output(fileName)

    -- these two lines work if the console and outputCapture are set in launch.json
    io.output():write(text)

    io.write("Hey there.")

    io.flush()

    io.input(fileName)
    local contents = io.input():read("*a")
    print("The contents of the file:\n" .. contents)

end

function test2()
    local fileName = "file.txt"
    local text1 = "Bein a big hero...\n"
    local text2 = "\nSure makes ya thirsty!"

    local file = io.open(fileName, "w+")
    file:setvbuf("line", 2)

    io.output(fileName)

    io.write(text1 .. text2)

    
    io.input(fileName)
    io.open(fileName, "r")
    
    local contents = io.read("*a")
    print(contents)
    
    io.close()
end

test2()