cmake_minimum_required(VERSION 3.0)
project(bdsapi)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(bdsapi SHARED
        DedicatedServer.h
        actor/Actor.h
        actor/player/Player.h
        actor/player/ServerPlayer.h
        util/Vec2.h
        util/Vec3.h
        util/ChunkPos.h util/BlockPos.h level/Level.h level/ServerLevel.h)
