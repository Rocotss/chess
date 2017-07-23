cmake_minimum_required(VERSION 2.8.9)
project (Chess)

set(SOURCES board.cpp
			elephant.cpp
			figure.cpp
			horse.cpp
			king.cpp
			pawn.cpp
			play.cpp
			queen.cpp
			rook.cpp)

set (HEADERS  board.h
		  	   elephant.h
			   figure.h
			   horse.h
			   king.h
			   pawn.h
			   play.h
			   queen.h
			   rook.h
			   step.h)

add_definitions(-DLIBCHESS_LIBRARY)

add_library(Chess SHARED ${SOURCES} ${HEADERS})
