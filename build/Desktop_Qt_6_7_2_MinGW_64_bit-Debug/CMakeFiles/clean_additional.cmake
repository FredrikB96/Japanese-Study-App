# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Japanese_Study_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Japanese_Study_autogen.dir\\ParseCache.txt"
  "Japanese_Study_autogen"
  )
endif()
