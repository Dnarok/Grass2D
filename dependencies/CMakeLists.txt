include(FetchContent)

FetchContent_Declare(
	SFML
	GIT_REPOSITORY	"https://github.com/SFML/SFML.git"
	GIT_TAG			"master"
)
FetchContent_Declare(
	imgui
	GIT_REPOSITORY	"https://github.com/ocornut/imgui.git"
	GIT_TAG			"master"
)
FetchContent_Declare(
	imgui-sfml
	GIT_REPOSITORY	"https://github.com/eliasdaler/imgui-sfml.git"
	GIT_TAG			"master"
)

set(BUILD_SHARED_LIBS OFF)
FetchContent_MakeAvailable(SFML)

FetchContent_MakeAvailable(imgui)

set(IMGUI_DIR ${imgui_SOURCE_DIR})
set(IMGUI_SFML_FIND_SFML OFF)
set(IMGUI_SFML_IMGUI_DEMO ON)
FetchContent_MakeAvailable(imgui-sfml)