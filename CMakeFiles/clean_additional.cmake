# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\testgui_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\testgui_autogen.dir\\ParseCache.txt"
  "testgui_autogen"
  )
endif()
