inherit ROOM;
void create() {
	set( "short", "$WHT$������$NOR$" );
	set( "owner", "lord" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/tendo/obj/chaosbelt",
		"file3"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/quests/snake/npc/obj/snake_gem",
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file10"   : "/daemon/class/blademan/obj/shield",
		"amount10" : 1,
	]) );
	set( "item_desc", ([
		"map" : @ITEM
������$HIM$������ϵ$NOR$
������$HIC$������ϵ$NOR$
������$HIB$������ϵ$NOR$
������$HIR$������ϵ$NOR$
������$HIY$��������$NOR$
������$HIG$�ŵػ�Ȫ$NOR$
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10067 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room310",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room284.c",
		"west"      : "/open/clan/sky-wu-chi/room/room249.c",
	]) );
	set( "long", @LONG
������С����$HIC$����$NOR$ƽʱ��Ϣ�ĵط�������İ��輫���������ӣ�ֻ��ǽ�Ϲ��˶Ե���
���Եü������ɣ��ഫ��Ե�������ѩ���ɿ�ɽ��ʦ��һλ�������е����ģ�ֻ�ǿ�ϧѩ
���ɿ�ɽ��ʦ��Ӱ���˲��ᵶ������������$HIC$����$NOR$�����Դ˵�����������

  $WHT$�������ͼ$NOR$(map)

LONG);
	setup();
	replace_program(ROOM);
}
