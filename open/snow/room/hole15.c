#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
          set("long","��Ѩ�ڶ���,���ھ��󶼲��,������û�������ĵ�ͼ����֮ǰ,��ò�Ҫ�󴳴˴���\n");

        set("exits", ([
         "west":__DIR__"hole22",
          "east":__DIR__"hole21",
          "south":__DIR__"hole14",
        ]) );
        set("objects", ([ /* sizeof() == 3 */
        "/open/snow/npc/2_bandit" :2
        ]) );
        setup();
}
