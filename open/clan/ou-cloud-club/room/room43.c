// Room : /open/clan/ou-cloud-club/room/room43.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$���$NOR$" );
	set( "object", ([
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10033 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
һ��¥���ڴ����Ѷ���,��֪ͨ���η�,��������΢���Լ���ǽ���
�����¹���,��������������,ȴ��������覴õ�����,��Ȼ����,����
��������֦��Ʈ�ݳ���֮��,ȴ�����˾���ë���Ȼ,��,�����Ǽ�����
��Ҳ�����źڰ�������,�ñ�,�������������Ļ����ű�.
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "down" : "/open/clan/ou-cloud-club/room/room42",
  "west" : "/open/clan/ou-cloud-club/room/room45.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
