inherit ROOM;
void create() {
	set( "short", "СħŮ��ħ����" );
	set( "object", ([
		"file9"    : "/open/wind-rain/obj/sun_red_cloth",
		"file1"    : "/open/tendo/obj/chaosbelt",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
	]) );
	set( "build", 10197 );
	set( "owner", "mei" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room101",
		"enter"     : "/open/clan/13_luck/room/room307",
	]) );
	set( "long", @LONG

��*0*����СħŮ��ħ���ݡ���>.<����
�������ȷۻ�ӭ��ĵ����������������кܶ������벻���ľ�ϲร�
����߿�ӡ����������һ�ѿɰ��� kity �������ұ߿���һЩ����̾
Ϊ��ֹ�ķ��߼�����������ǰ������һ����ͷ����Ļ����Ǿ���

         ���������ʦ����

��           �ɰ�С��ͷ        *@_@*


LONG);
	setup();
	replace_program(ROOM);
}
