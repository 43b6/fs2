// Room : /open/clan/ou-cloud-club/room/room42.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$���$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 14826 );
	set( "light_up", 1 );
	set( "long", @LONG
������Ʈ��һ�ų�ʪ����Ϣ,����վ��һ������ƽ̨��,�·������
�׵�ˮ��,ˮ����Ϊ�����ٵĳ�ª����,��ʱ����ˮ����»������������
,���ƺ��޷��뿪ˮ��̫��,�������������ˮ����,ˮ�����ƺ����ж���,
Ȼ�Ϸ�����������Ҳ������ԵĲ�������,���������ǱȽϽӽ�а��֮Դ
�ĵط���!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
  "up" : "/open/clan/ou-cloud-club/room/room43.c",
  "down" : "/open/clan/ou-cloud-club/room/room44.c",
  "west" : "/open/clan/ou-cloud-club/room/room41",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
