project "Cash_Flow"
    location "."
    kind "ConsoleApp"
    language "C++"

    targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
    objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

    files 
    {
        "%{wks.location}/%{prj.name}/src/**.c",
        "%{wks.location}/%{prj.name}/src/**.h"
    }

    filter "configurations:Debug"
        defines "DEBUG"

    filter "configurations.Release"
        defines "RELEASE"