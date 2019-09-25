# Automatically generated by boost-vcpkg-helpers/generate-ports.ps1

include(vcpkg_common_functions)

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/spirit
    REF boost-1.70.0
    SHA512 333e675b2742c55071d517e8dee0251d36b75ad4a11a70b48c74d060899710eb10e38afd20e9d40f28a041c792000c43c11208abad676ff923ca6d4866170a78
    HEAD_REF master
)

include(${CURRENT_INSTALLED_DIR}/share/boost-vcpkg-helpers/boost-modular-headers.cmake)
boost_modular_headers(SOURCE_PATH ${SOURCE_PATH})