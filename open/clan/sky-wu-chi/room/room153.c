inherit ROOM;
void create() {
	set( "short", "����֮��" );
	set( "object", ([
		"file6"    : "/daemon/class/fighter/ywhand",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/open/prayer/obj/boris-boots",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file10"   : "/open/killer/obj/s_pill",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/wu/npc/obj/armband",
		"amount10" : 41,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/capital/guard/gring",
	]) );
	set( "owner", "diana" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room214",
	]) );
	set( "build", 10059 );
	set( "light_up", 1 );
	set( "long", @LONG
�ղ���˼䣬ֻ�������ھ�Ȼ�����������ʵģ�����
ԼԼ֮�У��·����һ��������Ů�ӣ���վ�ڷ����
�����������裬ֻ�������趯֮�䣬������˲ʱ��������
��⼰���ף����˾��£��ּ���Ů���趯�������ң�����
ͻȻ����������Ӱ�����˲������׽ӽ��˼䡣
LONG);
	setup();
	replace_program(ROOM);
}
