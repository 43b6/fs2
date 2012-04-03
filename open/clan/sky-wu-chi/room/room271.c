inherit ROOM;
void create() {
	set( "short", "$HIG$��$HIM$��$HIY$̨$NOR$" );
	set( "owner", "mudu" );
	set( "object", ([
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/gsword/obj1/khelmet",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/main/obj/bird_legging",
		"file2"    : "/open/tendo/obj/red_dragon_chain",
		"amount4"  : 1,
		"file3"    : "/open/gsword/obj1/karmband",
		"amount9"  : 1,
		"file1"    : "/open/fire-hole/obj/g-pill",
		"file10"   : "/open/magic-manor/obj/magic-sign",
		"amount2"  : 1,
		"amount1"  : 9,
		"file5"    : "/open/main/obj/m_cloak",
		"file9"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "build", 10030 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room221",
	]) );
	set( "long", @LONG
���ܰ�����һ�Ѳ��ϣ���ʽ�����ĸֲĻ��н�����ǽ�ߣ�
һ���峺��ˮ���ڻ�¯�ߣ���¯���ľ̿�������ܵ�ȼ���ţ���
�ܵ��¶�ʮ�ֵĸߣ��㲻�����º������������߳���ʱȴ�ߵ�һ
����ڵĶ�����������Ī�����Ǵ�˵�е������𣿣���
LONG);
	setup();
	replace_program(ROOM);
}
