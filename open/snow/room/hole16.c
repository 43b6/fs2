#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
          set("long","��Ѩ�ڶ���,���ھ��󶼲��,������û�������ĵ�ͼ����֮ǰ,��ò�Ҫ�󴳴˴���\n");

        set("exits", ([
          "west":__DIR__"hole23",
          "north":__DIR__"hole13",
         "east":__DIR__"hole24",
        ]) );
        set("objects", ([ /* sizeof() == 3 */
        "/open/snow/npc/corpse" :2
       ]) );
        setup();
}
