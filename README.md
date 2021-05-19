# Kilocraft
Minicraft remake, BUT its sandbox, so basicly Minecraft in 2d


Some libaries(glad it was) were copied from jdh's "minecraft, made in 48 hours", https://github.com/jdah/minecraft-weekend/

building
Unix-like

repo clone by:`$ git clone --recurse-submodules https://github.com/AnonimFan/Kilocraft/`

building with:`$ make`

The following static libraries under lib/ must be built before the main project can be built:

    GLAD: lib/glad/src/glad.o
    GLFW: lib/glfw/src/libglfw3.a

All of the above have their own Makefile under their respective subdirectory and can be built with $ make libs. NP! If libraries are not found, ensure that submodules have been cloned.

The game binary, once built with `$ make`, can be found in `./bin/.`

Be sure to run with $ ./bin/game out of the root directory of the repository. If you are getting "cannot 
open file" errors (such as "cannot find ./res/shaders/*.vs"), this is the issue.

Windows

good luck 🤷‍♂️ probably try building under WSL and using an X environment to pass graphics through.
