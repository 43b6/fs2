inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIR$��$HIY$������$NOR$" );
	set( "owner", "lts" );
	set( "object", ([
		"file9"    : "/open/mogi/castle/obj/blood-water",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/mogi/castle/obj/leave",
		"amount9"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file4"    : "/open/quests/snake/npc/obj/snake_gem",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 10080 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room108",
		"east"      : "/open/clan/sky-wu-chi/room/room187.c",
		"west"      : "/open/clan/sky-wu-chi/room/room72.c",
	]) );
	set( "long", @LONG
    ������ҹ���µ����ķ�����,���з��߶����뻮һ�������ڷ�������
ÿ�����߶����������ǵĹ�â,��������������������,�㿴��������
�ղص����÷���..������������......���еķ��������ᵶ��սʱ,��
������һ��ǿ���ķ���.....

LONG);
	setup();
	replace_program(ROOM);
}
