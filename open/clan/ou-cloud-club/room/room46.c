// Room : /open/clan/ou-cloud-club/room/room46.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�����о���$NOR$" );
	set( "build", 15502 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room28",
  "up" : "/open/clan/ou-cloud-club/room/room47.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
�����Ѿ�û��ͨ·��,����ǽ������һ���һ�߼�����Сƽ̨
,�������͵�Χ����Բ���͵�ǽ�����Ѷ���,���ǲ��ں��������
С�Ǻ����Ż���ɫҺ�������ǰ���Ļ�,����Խ�����ЩСʯ̨
��Ծ����,Զ���ƺ�����һ��������������������..
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
