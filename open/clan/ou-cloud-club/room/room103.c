// Room : /open/clan/ou-cloud-club/room/room103.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
��о���ˮ�����ƺ��е�Ź�,��ͷ��ˮ��һ��,��Ȼ����
�ѿ�����ˮ����,��������һ�ɺ�����,����������������ʲô
��������Ҳ��һ��,����ν���뻢Ѩ,�ɵû���,Σ�յĵط�,
Ҳ���ǲ��б���ĵط�,Ҫ��ȥһ�þ�����?
LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIW$��ħ��$HIR$����ˮ��$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount2"  : 1,
		"amount5"  : 1,
		"file6"    : "/open/magic-manor/obj/fon-sky-sword",
		"file1"    : "/open/magic-manor/obj/fon-sky-sword",
		"file3"    : "/open/magic-manor/obj/fon-sky-sword",
		"file5"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount4"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount3"  : 1,
	]) );
	set( "build", 10005 );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"east"      : "/open/clan/ou-cloud-club/room/room104.c",
		"west"      : "/open/clan/ou-cloud-club/room/room100",
		"down"      : "/open/clan/ou-cloud-club/room/room102",
]) );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	setup();

	}
