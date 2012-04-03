// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
����������(lake)��֪���ؾ���������ů���ں���
��Χ��ȫ��������ѩ����ľҲ�ָ�������ɫ��
����ˮҲ���������������һ����Ȼ�����µģ�
����������ȥ��Ӿ�������ѩ���о�������˵�
���������˲��벻͸��

LONG
	);
	  set("item_desc", ([ /* sizeof() == 1 */
  "lake" : "һ��������ɽ��֮������ˮ�����µ������̲�ס������ȥ��Ӿ��",
]));
	set("exits", ([ /* sizeof() == 3 */
	"east" : __DIR__"m4",
	"south" : __DIR__"m6",
]));
	set("outdoors", "1");

	setup();
}

void init()
{
        add_action("do_jump", "jump");
}
int do_jump(string arg)
{
        object who;
        who = this_player();

        if( !arg || arg!="lake" )
        return notify_fail("�������谡??\n");
        tell_object(who,"���ס������Ѹ�ٵ�������У�����һ��������\n");
        who->move("/open/dancer/room/yuaroom");
        tell_room(this_object(),"�㿴��"+who->query("name")+"���ѿ�������������У����Թ���ʽ������ȥ��\n");
        return 1;
}
