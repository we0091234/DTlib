cmake_minimum_required(VERSION 3.10.0)
project(smartPoint)
aux_source_directory(./ SRCLIST)
add_executable(smartPoint ${SRCLIST})