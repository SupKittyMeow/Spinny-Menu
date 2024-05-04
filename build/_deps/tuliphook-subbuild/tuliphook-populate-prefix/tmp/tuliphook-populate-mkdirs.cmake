# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-src"
  "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build"
  "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix"
  "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/tmp"
  "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp"
  "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src"
  "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
