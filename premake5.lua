-- premake5.lua 

workspace "Cash_Flow"
    architecture "x86_64"
    startproject "Cash_Flow"

    configurations
    {
        "Debug",
        "Release"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "Cash_Flow"