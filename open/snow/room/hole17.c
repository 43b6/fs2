#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
          set("long","��Ѩ�ڶ���,���ھ��󶼲��,������û�������ĵ�ͼ����֮ǰ,��ò�Ҫ�󴳴˴���\n");

        set("exits", ([
          "west":__DIR__"hole24",
          "east":__DIR__"hole13",
        ]) );
        set("objects", ([ /* sizeof() == 3 */
        "/open/snow/npc/corpseking" :1
        ]) );
        setup();
}
