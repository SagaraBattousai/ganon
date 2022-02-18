
set(PUBLIC_HEADDER_DIRS "${GANON_INCLUDE_ROOT_DIR}")#/ganon")
message(STATUS ${PUBLIC_HEADDER_DIRS})

set(src_files data.c arrayfunctions.c datasettype.c)

file(GLOB public_headder_files "${PUBLIC_HEADDER_DIRS}/ganon/*.h")
file(GLOB private_headder_files *.h)

#Headers are added so Visual studios sln looks nice
add_library(data 
  SHARED
  ${src_files} 
  ${public_headder_files} ${private_headder_files})

as_python_library(data)

target_include_directories(data 
  PUBLIC 
  ${Python3_INCLUDE_DIRS}
  ${Python3_NumPy_INCLUDE_DIRS}
  ${PUBLIC_HEADDER_DIRS})

target_compile_definitions(data PUBLIC 
  MODULE_ARRAY_API_NAME=data_ARRAY_API)

target_link_libraries(data ${Python3_LIBRARIES})

#find_package(SimpleITK)
#add_executable(sitk_example sitk_example.cpp)
#target_link_libraries(sitk_example ${SimpleITK_LIBRARIES} )

