#include <room.h>
#include <ansi.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","����������");
        set("valid_startroom", 1);
          set("long","������ǰ���������ۣ�������Ϳ����뿪������\n");
        set("exits", ([
	"north":__DIR__"room5",
	"south":__DIR__"room5b",
	"west":__DIR__"room5c",
	"east":__DIR__"room5b",
        ]) );
	set("objects",([SNOW_NPC"cmatetwo":1]));
          setup();
}
void init()
{
	add_action("do_search","search");
}
int do_search(string str)
{
	if(str!="eye") return 0;
	message_vision(
	"$N�����������ң�ͻȻ�����˰��ţ�ʹ���۴��˿�����\n",this_player());
	set("exits",([
	"north":__DIR__"room5",
	"south":__DIR__"room5b",
	"east":__DIR__"room5b",
	"west":__DIR__"room5c",
	"out":__DIR__"8_out",
	]));
	return 1;
}
