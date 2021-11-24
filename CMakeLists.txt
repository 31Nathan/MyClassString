cmake_minimum_required (VERSION 3.12)
project(MY_STRING LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

function (set_flags target)
    #Set C++11
    target_compile_features(${target} 
        PUBLIC 
        cxx_std_11
    )
    set_target_properties(${target} 
        PROPERTIES 
        CXX_EXTENSIONS OFF
    )

    #Set flags
    if(MSVC)
        target_compile_options(${target} 
            PRIVATE 
            /W4 
            #/WX
        )
    else()
        target_compile_options(${target} 
            PRIVATE 
            -Wall 
            -Wextra 
            -pedantic
            -Wshadow
            -Wpointer-arith
            -g
            -Og
            -Werror 
        )	
    endif()
endfunction(set_flags)

#Directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Root Directory
set(SRCROOT ${PROJECT_SOURCE_DIR}/my_string)
set(INCROOT ${PROJECT_SOURCE_DIR}/include)
set(SRC
	${SRCROOT}/my_string_tools.cpp
)

add_executable (my_string ${SRC})
set_flags(my_string )

install(TARGETS my_string 
    RUNTIME
    DESTINATION ${PROJECT_INSTALL_DIR})