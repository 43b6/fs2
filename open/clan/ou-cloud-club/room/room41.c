// Room : /open/clan/ou-cloud-club/room/room41.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$���$NOR$" );
	set( "build", 10005 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
�������㿴�������޴������,˨�ż�ͷ������������������,
������Ȯ,�������ǻ���Ȯ�Ѳ�����ϸ��,��Ϊ��Ƴ�����м�������Ĺ�
������������ʱ�ᱻ��Щ��������Х���������ﳶ��,�������������
��ǰ��һ�Ѱ׹�ʱ,���������ĵ�ѶϢ���Ժ���һ������,���뿪��!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room42.c",
  "west" : "/open/clan/ou-cloud-club/room/room40",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
