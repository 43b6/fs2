inherit ROOM;
void create() {
	set( "short", "EMC ս��������" );
	set( "object", ([
		"amount8"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"file10"   : "/open/killer/memory/static",
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"file8"    : "/open/killer/memory/static",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10116 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room104.c",
		"enter"     : "/open/clan/13_luck/room/room284",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�����й����ĺ�����ԭ..���������� �����Ѿ���..
���ǿ����೤�ڱ�����..��x ��ע��,���ĸ������߶��ٹ�
��,��ʲô����..��ʲô��ʽǰ��..
������������ȥ..Ҳ����������..��Ǯ��С�۷����..
���ڲݴ�ң�����..�����������...Ҳ��һ������
LONG);
	setup();
	replace_program(ROOM);
}
