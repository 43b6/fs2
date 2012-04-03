inherit ROOM;
void create() {
	set( "short", "�������ϵ��ڷ���" );
	set( "owner", "sir" );
	set( "object", ([
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/capital/obj/gold_pill",
		"amount9"  : 704,
		"file3"    : "/open/tendo/obj/chaosbelt",
		"amount5"  : 1,
		"file8"    : "/open/doctor/pill/human_pill",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount8"  : 158,
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/doctor/pill/ice_pill",
		"amount4"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10353 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room158",
		"down"      : "/open/clan/sky-wu-chi/room/room27",
	]) );
	set( "long", @LONG

������������Ԥ�������ŵķ��䣬Ϊ�˷�ֹ�����Ŵ��˵������з��֣�
�ص�����һ���ڷ������κ��˷��֣�����������һ����֪�߳ܵ�Сɫ�ꡣ
���һ�Ҫ������������ڷ��������Լ������������Ǵ����Żᷢ����?
��а��ض��Ŵ��˵�ţ����Ϲ�ӳ���⽩�����������
Ҳ��˶������������ķ�����ǿ����ѧ��

LONG);
	setup();
	replace_program(ROOM);
}
