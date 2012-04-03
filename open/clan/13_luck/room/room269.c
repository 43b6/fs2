inherit ROOM;
void create() {
	set( "short", "���ױۻ���" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"amount5"  : 1,
		"amount2"  : 1,
		"file10"   : "/daemon/class/fighter/armband",
		"amount7"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file1"    : "/open/wind-rain/obj/bird-blade",
		"amount3"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"amount1"  : 1,
	]) );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room280",
		"south"     : "/open/clan/13_luck/room/room298.c",
	]) );
	set( "build", 10083 );
	set( "light_up", 1 );
	set( "long", @LONG

    ¤ɽ����֮��ɫ��¤ɽ�ɣ��Ǹ�����������֮�ֵĺ��վ������ϵ�
�����ۻ���Ҳ�ǲ���ķ��ߣ���Ҫ�õ���Ҫ�ȴ��������������ӣ���
�����������ڣ���Ȼ��ƾ���ĺ��վ�Ҫ��������Ҫ����������˵������
�����������ף���ǰһ�ڣ�ʲô����֪���ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
