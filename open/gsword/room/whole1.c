#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "岩穴");
        set("long", @LONG
这儿是岩穴的尽头，四周一片平坦，是个练功的好地方，看了看这四面的岩壁
发现满是密密麻麻的蝇头小字，趋前一看，好像记录着一些武功招式，不过你依
招演练了一下却发现这好像只是一般的武功，另你大感失望。
LONG
        );

        set("exits", ([
"east":__DIR__"whole",
        ]) );
setup();

}
