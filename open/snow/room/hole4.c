#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
          set("long","����һ���൱������С·,�������𴵵���ë���Ȼ,��ֻϣ������һ���뿪�������������С·��\n");

        set("exits", ([
          "west":__DIR__"hole6",
          "east":__DIR__"hole1",
        ]) );
        setup();
}
