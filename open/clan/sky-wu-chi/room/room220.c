inherit ROOM;
void create() {
	set( "short", "�Ļ�С��" );
	set( "owner", "clodsnow" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/gsword/obj/may_ring",
		"amount8"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount10" : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/wu/npc/obj/armband",
		"amount9"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/wind-rain/obj/sun_red_cloth",
		"file3"    : "/open/tendo/obj/chaosbelt",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10054 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room219",
	]) );
	set( "long", @LONG
������ƮƮ������Ʈ������ã���������ȴ�����Լ���������
�ǻ���δ����ʬ����������ʹ��Ļ���?�㶨��һ����������ʶ
���߳��˻��ȣ�������һ�����ŵ�С�ݣ����ܵķ��ְ����ǲ���
����ɱ��������������ǰʱ�����ܾ�����һ�����磬������ɱ����
������������ܣ���̤һ�����ƺ���Ҫ�������������----����
��ǰ��??
LONG);
	setup();
	replace_program(ROOM);
}
