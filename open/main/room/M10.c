// Room: /open/main/room/M10.c

inherit ROOM;

void create()
{
	set("light_up",1);
	set("short", "ʥ����");
	set("long", @LONG
	�ߵ����Ѿ��ǳ��ȵľ�ͷ����ǰ����ʯ������ͷ����
	��ʥ���ڡ������֣�����Ǵ�ʯ���Ϸ����ģ�ʵ����
	������˼���������˳����Ⲣû��������ͨ��������
	������ص�ʯ��(chaitya)���Ǹ��������ม�


LONG
	);
	set("item_desc",([
	"chaitya"	: "�ÿ��ģ�������һ��(touch)�ɣ�\n",
		]));
	set("exits", ([ /* sizeof() == 1 */
  "eastdown" : __DIR__"M11a",
]));

	setup();
}

void init()
{
	add_action("do_touch","touch");
}

int do_touch(string arg)
{
	object who;
	who = this_player();
	if(!arg || arg != "chaitya" )
	return notify_fail("��Ҫ��ʲô������\n");
	if(who->query("class") != "taoist"
	|| !who->query("class") )
	return notify_fail("�������һ��ʯ����û��ɶ�ر�\n");
	else
	{
	message_vision("��$N������ʯ��ʱ��һ���â��$N�����ˣ�\n",
	who);
	who->move("/open/tendo/room/door");
	return 1;
	}
}

