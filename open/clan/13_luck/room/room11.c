inherit ROOM;
void create() {
	set( "short", "�����" );
	set( "object", ([
		"amount10" : 1,
		"amount8"  : 1,
		"amount3"  : 5,
		"amount7"  : 1,
		"file6"    : "/open/mogi/castle/obj/blood-water",
		"file7"    : "/open/killer/obj/herb",
		"file3"    : "/open/killer/obj/s_pill",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount6"  : 15,
		"amount2"  : 1,
		"file9"    : "/open/tendo/obj/book",
		"file8"    : "/open/killer/obj/herb",
		"amount9"  : 1,
		"file4"    : "/open/killer/obj/s_pill",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 1,
		"amount4"  : 5,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "build", 10070 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room228",
		"south"     : "/open/clan/13_luck/room/room8.c",
		"enter"     : "/open/clan/13_luck/room/room10",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

�������ѽ����˻ʳǵ����ģ�һ����ΰ�ľ�������������ǰ���ō��Ͽ�
��--- ������������֣�����ͨ���ʳ������������Ψһ��·��������
�˻ʳ���������֮�أ���ʮ�������ڵȼ��ϸ�֮���֣����������У���
������ܸо�����һ��ǿ������������洫�������еĴ��ڸ��֣���ʱ
���Ӱ����Ĵ�����

LONG);
	setup();
	replace_program(ROOM);
}
