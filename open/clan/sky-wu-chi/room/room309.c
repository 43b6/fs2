inherit ROOM;
void create() {
	set( "short", "$MAG$����翿ռ䡿$NOR$" );
	set( "owner", "peiyi" );
	set( "object", ([
		"amount10" : 1,
		"file4"    : "/open/poison/obj/pearl",
		"amount2"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount8"  : 1,
		"file5"    : "/daemon/class/blademan/obj/shield",
		"file8"    : "/open/ping/obj/cloud_fan",
		"amount1"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 11625 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room74",
	]) );
	set( "long", @LONG
һ̤���˴�����Ȼ��������ȫʧ����������ƺ�ҪƮ������������
�����ƣ����ű߼ʣ�������С����ƽ��������ĳ�����������һ����
������ĵط����������Աߵĵ�����һ����������������˻�����Լ�
�ƺ��ܷ���������Ҳ��Ϊ��ˣ�С����ѡ���˴˴����ӣ���������ϰ��
�������輼�������ﻹ��һ������Ĺ��ܣ����ǿ��԰ѷ�������������
�ü���������С������ڤ˼��ʱ���Խ���Ը���������һЩ���ص�
�貽��

LONG);
	setup();
	replace_program(ROOM);
}
