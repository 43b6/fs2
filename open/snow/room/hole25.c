#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
           set("short","��Ѩ");
          set("long","����һ������,���������ɱ������,,������˵��������ѹ�ȸ�,���ú�����ʲô���Ծ�,ϣ���Ͽ��뿪���\n");
        set("exits", ([
                "out":__DIR__"hole13",
        ]) );
	set("objects",([
        SNOW_NPC"killer":1,
	]));
        setup();
}
