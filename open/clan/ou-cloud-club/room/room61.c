// Room : /open/clan/ou-cloud-club/room/room61.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$ʱ�ơ���$NOR$" );
	set( "build", 2250 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "westup" : "/open/clan/ou-cloud-club/room/room64.c",
  "eastdown" : "/open/clan/ou-cloud-club/room/room57",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
���ʵ�����֮��,ǰ����һ�������͵ĵ�б��,б�����ྐྵ
��վ����һ���ֳֻ����ڵ�����ͷ,�������˴�Ŀ�ľ�,������
�Ǽ�����֮��,ԭ������ס�Ĺؽ�ͻȻ��������,���Ż����ڵ�
�ָ߸߾���,�ۿ��ž�Ҫ����,���㵱����ɱ,ս����...?

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
