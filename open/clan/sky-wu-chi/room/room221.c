inherit ROOM;
void create() {
	set( "short", "$HIC$��ʥ��$NOR$" );
	set( "owner", "mudu" );
	set( "object", ([
		"amount8"  : 1,
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/daemon/class/fighter/figring",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/wind-rain/obj/sun_red_cloth",
		"file5"    : "/open/tendo/obj/chaosbelt",
	]) );
	set( "build", 10223 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room246.c",
		"west"      : "/open/clan/sky-wu-chi/room/room271.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
 ������������һ��ž��Ŀտ����ң�ǽ�Ϲ���һ����Ħ��ʦ����ڻ���
 ��ׯ�ϵ���Ϣ�������ܣ�һ��Ӣ��ͦ�εĽ�ʿ��ϥ�������������룬һ����
 ������ݷ·�������ѳ��������ھ������⣬����������������Ȥ������
 ���Ծ͵ش������ȴ���ʿ�����ٸ������һ����

LONG);
	setup();
	replace_program(ROOM);
}
