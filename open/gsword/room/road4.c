#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "平台");
        set("long", @LONG
   
眼前是宽约寸许的石梁，横架在两座山之间，云气笼罩,望不见尽
处奔一段跃过了七个断崖，石梁已到了尽头，眼前是一望无际的石阶，
看来仙剑派应不远了。

LONG
        );

        set("exits", ([
                "south":__DIR__"road1",
               "up":__DIR__"road6",
        ]) );
        set("outdoors","/open/gsword");
setup();

}
