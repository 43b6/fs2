inherit ROOM;
void create() {
	set( "short", "ս��׼����" );
	set( "owner", "bbsman" );
	set( "object", ([
		"amount7"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/port/obj/wolf_ring",
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file4"    : "/open/common/obj/liz_meat",
		"file6"    : "/daemon/class/blademan/obj/six-neck",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/wu/npc/obj/armband",
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10346 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room122",
		"west"      : "/open/clan/sky-wu-chi/room/room331",
	]) );
	set( "long", @LONG
����ǡ�BBSMAN���ڳ�����սǰ�ġ�ս��׼���ҡ���ÿ
�γ���ǰ���ǻ�������ߣ�������ȫ��׼���Ż���š�����
�����������ҵ�����������ɢ��һ��Ҳ����Ϊ���ˡ��ر��
�ǣ�����ǡ�BBSMAN�����·��ĵط����ɲ�Ҫ������˵ࡡ�
LONG);
	setup();
	replace_program(ROOM);
}
