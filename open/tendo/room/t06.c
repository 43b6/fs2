// Room: /open/tendo/room/t06.c

inherit ROOM;

void create()
{
	set("short", "���۵���Χ����");
	set("long", @LONG
�������ڵ��۵���Χ�����ϣ��������ż�Ӳ��ˮĥ��
ש�����������˴��̵���ľ�����������泩��

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"t01",
  "east" : __DIR__"t07",
	"west" : __DIR__"t12",
]));
	set("light_up",1);
	setup();
}
/*
void init()
{
        add_action("do_search", "search");
}
*/

int do_search()
{
        object who;
        who = this_player();

        tell_object(who,"\n��ſ�ڵ��ϰ���ѷ�������Ȼ����һ���ص����ص��е�ǿ"+
			   "���������������˵ص�.....\n");
        who->move("/open/tendo/room/r0");
        tell_room(this_object(),"�㿴��"+who->query("name")+"���ص��е�ǿ����"+
				 "����������.....\n");
        return 1;
}
