// Room : /open/clan/ou-cloud-club/room/room59.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$ʱ�ơ���$NOR$" );
	set( "build", 10004 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room60.c",
  "west" : "/open/clan/ou-cloud-club/room/room58",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
����ʱ��ͬʱ������.��.��.�������,������ʹ��Щʱ�ӵ���
��������,һֱ�������ֹ��ɵ�����֮��,�ܻ᲻֪�����������е�
��Ϊ���ŵδ�������,���¿��費�ݶ���,����ǻ����˷����,��
�ǸϿ�ӽ��Ų�,�뿪���ħ���ԵĹ���ռ��!!

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
