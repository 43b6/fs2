#include <room.h>

inherit ROOM;

void create()
{
        set("short","��Ѩ��");
         set("long","�����Ƕ�Ѩ�����棬�ƺ������Ѳ������г��ڣ���ǰ����Զ�����Կ�һ��ѩ��ɽ��\n");
        set("exits", ([
		"south":__DIR__"hole3",
        ]) );
	set("light_up",1);
        setup();
}
