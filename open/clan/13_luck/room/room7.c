inherit ROOM;
void create() {
	set( "short", "�ʳǴ��" );
	set( "object", ([
		"amount4"  : 1,
		"file1"    : "/open/mogi/dragon/obj/power",
		"amount10" : 1,
		"file8"    : "/open/killer/headkill/obj/world_dag",
		"amount6"  : 1,
		"file5"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount5"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/magic-manor/gold/obj/golden-blade",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 10,
		"amount3"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount8"  : 1,
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "build", 10006 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room6",
		"south"     : "/open/clan/13_luck/room/room4.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ������ʮ������Ĵ�Ӫ--�ʳǣ�������ȥ������¥��һ��ׯ
�ϵ����������������ʳǣ�ʹ����֮ȴ��������ʯ���Ͽ��������ڷ���
֮������ʮ�����黨������������������ɣ��ǰ���֮�ˣ�һ��̤��
�ʳ�֮�����ѻ�ͷ, ֻ�����ɥ������֮�³�...

LONG);
	setup();
	replace_program(ROOM);
}
