// firedancer �޸� 2002/07/28
// Room: /open/main/room/L12.c

inherit ROOM;

void create()
{
        set("short", "̨��");
        set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
������һ��ʯ�ݣ�ʯ���ϵ��̴Ѳ���ð��������̣������ƺ�
����ס�����档

		<< ʯ�� >>
\n");
	set("item_desc",([
"ʯ��":"ʯ���ƺ�û�������ƺ�����ֱ�ӽ�ȥ..\n",
]));
	set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"L11",
"north" : __DIR__"m31",
]) );
	set("outdoors", "/open/main" );
setup();
}

void init()
{
add_action("do_enter","enter");
}

int do_enter(string arg)
{
object me = this_player();

	if( !arg )
		return 0;

	if( arg!="ʯ��" && arg!="horse" )
		return 0;

	message_vision("$N������ʯ���ڡ�\n",me);
	me->move("/open/firedancer/t01.c");
return 1;
}
