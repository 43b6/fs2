#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "时空雕像馆");
        set("long", @LONG
为了让所有的人更了解曾经为这个狂想世界努力过的天神们，所
以特别建造了这座雕像馆，让人们在游戏欢娱之时，也能在此感谢他
们所付出的一切时间和心血，也要感谢您花时间来参观。

接着站立在你眼前的雕像是  【 耐吉(nike) 】

LONG);


        set("exits", ([ 
//      "north" : __DIR__"bssroom",
        "south" : __DIR__"cgyroom",
        ]) );

        set("objects", ([
        "/open/main/statue/npc/nike-statue": 1,
        ])); 

        set("outdoors", "/open/main" );
        set("no_fight",1);
        set("no_kill",1);

        setup();
}

