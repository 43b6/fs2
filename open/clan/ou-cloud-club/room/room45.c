// Room : /open/clan/ou-cloud-club/room/room45.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�����о���$NOR$" );
	set( "build", 10009 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/ou-cloud-club/room/room3",
  "east" : "/open/clan/ou-cloud-club/room/room43",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
�컨����ż���δ֪��Һ��,��ͻȻ�������˽����ĳɷ�,
���漴�뵽�¹��������Ĳб�Ѫ��,������Щ�����Ǹ�ʬ��ʬˮ
��������������ܺ��ߵĶ�Һ,��������Ϊ���!!����,������
���Ǹ�ʵ����,���ֿɼ���,����ƿƿ�޹޵ĸ��ֻ�ѧ����,����
��಻֪���Ľ�������,����ǵ����������Ļ����䱸��!?
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
