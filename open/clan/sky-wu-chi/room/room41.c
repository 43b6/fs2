// Room : /open/clan/sky-wu-chi/room/room41.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/sky-wu-chi/room/room132",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"down"      : "/open/clan/sky-wu-chi/room/room128",
		"out"       : "/open/clan/sky-wu-chi/room/room21",
]) );
	set( "cmkroom", 1 );
	set( "long", @LONG
�ſ����续��ɽˮ���,���Ŀ��Խ������,��Ȼֻ��������һС����,
�����������������������崺��,��ʱ���д���˼���������{����ɢ��
Ū����},�����һ��������. ^_^;
����������Ų���������ȥʱ,
��о��Ҳ�ļ�ɽ�ƺ��ֵֹ�,
������ϸ��̽�·�������ĳ����̦�б����ƶ����ļ���,
�㲦����̦����һ�Ű�Ŧ,
�ں�������ʹ��ѹ�°�ť,
���һ��,��ɽ�����һ�����µ�¥��.....
LONG);
	set( "short", "$HIC$˼��֮��$HIW$����$NOR$" );
	set( "object", ([
		"amount9"  : 1,
		"amount1"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/daemon/class/fighter/figring",
		"file3"    : "/open/ping/obj/poison_pill",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file5"    : "/open/wind-rain/obj/sun_red_cloth",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"amount10" : 1,
		"amount8"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/wu/npc/obj/armband",
	]) );
	set( "owner", "salicili" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10034 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
