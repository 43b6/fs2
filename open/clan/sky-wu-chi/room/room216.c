inherit ROOM;
void create() {
	set( "short", "�����" );
	set( "object", ([
		"amount10" : 1,
		"file1"    : "/open/clan/area/home/sexbox",
		"amount6"  : 1,
		"file8"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/wu/npc/obj/armband",
		"file10"   : "/open/gsword/obj/may_ring",
		"amount8"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10119 );
	set( "owner", "jsa" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room190",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
������һ���ľ�������������Ÿ�С�Ҷ����
һ��ľƬ����������������ݡ����֣�����ϸ�����ӵ�
�����ļ���˼�����滹��������С��ľ�������İ�����
Ϣ������һ���������������ҡ�䣬ɳɳ����·���
�˳�̾���Ҷ��������Լ���ż���ɪ֮�⣻��Զ������
��԰��ʱ�������㵭����
LONG);
	setup();
	replace_program(ROOM);
}
