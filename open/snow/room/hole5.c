#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
         set("long","һ����ͨ�Ķ�Ѩ,���ٸ��ӵĵ���,�Ƿ�ͽ����ĺõص㡣\n");

        set("exits", ([
          "west":__DIR__"hole1",
        ]) );
        set("objects", ([ /* sizeof() == 3 */
        "/open/snow/npc/bandit" :3,
        ]));
        setup();
}
