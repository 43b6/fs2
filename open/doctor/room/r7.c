inherit ROOM;

void create()
{
        set("short", "药圃");
        set("long", @LONG

    经过迷阵的传送，你来到了这里，大概素玩迷宫太
    久了，这里的景物有一点模模糊糊的。

LONG
        );
        set("can_search",1);
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r6",
  "south" : __DIR__"r8",
]));
        set("no_clean_up", 0);

        setup();
        }


