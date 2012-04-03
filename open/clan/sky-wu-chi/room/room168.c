inherit ROOM;
void create() {
	set( "short", "hild ֮��" );
	set( "owner", "hild" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"file1"    : "/open/ping/obj/gold_hand",
		"file3"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/ping/obj/iceger",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 10077 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room179.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room173.c",
		"down"      : "/open/clan/sky-wu-chi/room/room94",
		"south"     : "/open/clan/sky-wu-chi/room/room243.c",
		"north"     : "/open/clan/sky-wu-chi/room/room343",
	]) );
	set( "long", @LONG
������ר�ŷ��á�������ʥ�������ӵ���ͷ�ĵط�
�������ܵظ����������������������ӵ�г�ǿ��ʵ��
���Ե�Ȼ���г�ǿʵ���Ķ���Ҳ�Ǹʰ��·磬�뵽���
�뵽��ǰ�����һ��Ǹ�����ʱ��������µĵ��˶���û
���������������ȥʱ���������˾��Ŀ�ϧ����������
�͸�λ�������Ǿ�������������׵õ�������ͷ������
����Ҳ��ֵ�õ�:D��
LONG);
	setup();
	replace_program(ROOM);
}
