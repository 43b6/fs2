// Room : /open/clan/ou-cloud-club/room/room28.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�����о���$NOR$" );
	set( "build", 10017 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room3",
  "west" : "/open/clan/ou-cloud-club/room/room46.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
��������Ŵ����ľ����Թ�,����װ������ɫ��Һ��,�Լ�
һ�߾�ʧȥ�������������,���������Ƕ�ħ�ǵ�ʵ������,
,�Թ������,����ն�,����������Һ��,����Űװ׻ƻƵ�
��ʽ������,�Խ�,����������������ĵ���������...
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
