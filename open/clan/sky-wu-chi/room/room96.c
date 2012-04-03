inherit ROOM;
void create() {
	set( "short", "$HIW$��ʥ��$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file4"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 1,
		"file5"    : "/open/capital/obj/king-boots",
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"amount4"  : 19,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file6"    : "/open/capital/guard/gring",
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount10" : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"file1"    : "/obj/gift/hobowdan",
		"amount7"  : 1,
	]) );
	set( "build", 10320 );
	set( "owner", "herozero" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room150.c",
		"south"     : "/open/clan/sky-wu-chi/room/room97.c",
		"east"      : "/open/clan/sky-wu-chi/room/room148.c",
		"west"      : "/open/clan/sky-wu-chi/room/room98",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��ѽ��������ã���С�ĵ���ɽ����ȴ�ҵ��˴�˵�еġ���ʥ�ӡ�
СС����ʥ��ǰ�и����Ĺ㳡���㳡�϶��������õ�ľ�ˣ�ľ׮����
Ȼ����ʹ����ʥ���������������Ļ�Ҳ�ǲ��еģ��뵽�⣬�㲻����
�Լ���ʲôʱ����ܴﵽ��ʥ�ľ�����??
LONG);
	setup();
	replace_program(ROOM);
}
