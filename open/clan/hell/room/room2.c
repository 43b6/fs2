inherit ROOM;
void create() {
	set( "short", "$HIW$�κ���β$NOR$" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 14261 );
set( "exits", ([        
		"north"     : "/open/clan/hell/room/room13.c",
		"south"     : "/open/clan/hell/room/room3.c",
		"west"      : "/open/clan/hell/room/room95.c",
	]) );
	set( "long", @LONG
�����Ѿ����κ��ŵ���β�ˣ�����ǰ�߾�Ҫ�����Ź��ˣ����Ź�ǰ��
�˺ó��Ķ��飬������������������ˣ�һ���ǻ��ǳ��ϣ����ظ��۹��
������һ�־��������Ѿ�����������ʹ�ߴ������ģ����һ�֣���������
���ֹ»�Ұ������û�ط�ȥ��ֻ�����ظ������ġ�

  ���޳�(Black gargoyle)
LONG);
	setup();
	replace_program(ROOM);
}
