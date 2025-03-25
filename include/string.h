#ifndef STRING_H
#define STRING_H

#include "types.h"

uint16 strlength(string ch){
    uint16 i = 1;
    while(ch[i++]);
    return --i;
}

/*uint8 strEql(string ch1,string ch2)                     
{
        uint8 result = 1;
        uint8 size = strlength(ch1);
        if(size != strlength(ch2)) result =0;
        else 
        {
        uint8 i = 0;
        for(i;i<=size;i++)
        {
                if(ch1[i] != ch2[i]) result = 0;
        }
        }
        return result;
}*/

uint8 strEql(string ch1, string ch2)                     
{
    uint8 size1 = strlength(ch1);
    uint8 size2 = strlength(ch2);

    if (size1 != size2) return 0;
    for (uint8 i = 0; i < size1; i++)
    {
        if (ch1[i] != ch2[i]) return 0;  
    }

    return 1; 
}


#endif
