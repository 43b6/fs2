#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
	set("short","����");
          set("long",@LONG
������ѩ���ɵ���������ͷ��װ�ο�������һ����ʷ�ˣ�����
������ѩ���ɵĸ��ݵأ�����Ľ��������ٶ��꣬�ഫѩ����
��ɽ��ʦ���꿪��ʱ�ƺ��н���һЩ��������֮��ġ�
LONG);
        set("exits", ([
	"south":__DIR__"room12",
	"east":__DIR__"room16.c",
        ]) );
	set("objects",([
		SNOW_NPC"snow_guard":1,
	]));
	set("light_up",1);
        setup();
}
