// Room : /open/clan/ou-cloud-club/room/room15.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"north"     : "/open/clan/ou-cloud-club/room/room14.c",
		"east"      : "/open/clan/ou-cloud-club/room/room148",
		"west"      : "/open/clan/ou-cloud-club/room/room17.c",
		"south"     : "/open/clan/ou-cloud-club/room/room135.c",
]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

��������Ƶ�(mekyn)�ķ��䣬�ұ���������(amdxp)֮����

LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIY$��$HIC$��$NOR$��$NOR$" );
	set( "owner", "win" );
	set( "build", 11145 );
	setup();

	}
