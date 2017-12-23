#include <stdio.h>

/*
  https://msdn.microsoft.com/en-us/library/bb384838.aspx?f=255&MSPPError=-2147217396

  Requirements:
  Visual Studio and the optional Visual C++ components,
  or the Microsoft Visual C++ Build Tools.

  Instructions:
  1. Open Developer Command Prompt for VS2015, or
  Visual C++ 2015 x86 Native Tools Command Prompt
  2. Run `cl simple.c` in the root folder using the command prompt.
*/

int main()
{
    printf("Hello, World! This is a native C program compiled on the command line.\n");
    return 0;
}
