#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
          set("long","��Ѩ�ڶ���,���ھ��󶼲��,������û�������ĵ�ͼ����֮ǰ,��ò�Ҫ�󴳴˴���\n");

        set("exits", ([
          "west":__DIR__"hole15",
          "east":__DIR__"hole12",
        ]) );
        setup();
}
