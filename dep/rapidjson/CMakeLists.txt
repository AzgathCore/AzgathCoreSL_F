# Copyright 2023 AzgathCore
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

add_library(rapidjson INTERFACE)

target_include_directories(rapidjson
  INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_definitions(rapidjson
  INTERFACE
    -DRAPIDJSON_HAS_STDSTRING
    -DRAPIDJSON_48BITPOINTER_OPTIMIZATION=0
    -DRAPIDJSON_ASSERT=WPAssert)

if(CMAKE_SYSTEM_PROCESSOR MATCHES "(x86_64)|(AMD64|amd64)|(^i.86$)")
  target_compile_definitions(rapidjson INTERFACE -DRAPIDJSON_SSE2)
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "^arm")
  target_compile_definitions(rapidjson INTERFACE -DRAPIDJSON_NEON)
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "^aarch64")
  target_compile_definitions(rapidjson INTERFACE -DRAPIDJSON_NEON)
endif()
