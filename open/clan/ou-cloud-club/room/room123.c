// Room : /open/clan/ou-cloud-club/room/room123.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG

С��ÿ���°������ FS �ĵط�

����С���Ѿ��ܾ�û���˷���

�˷�����С������������������

Ҳ����С�а������Ļ��ذ�

������ͨ����Ҳ������������ɨ

�ټ������˾ò�������˴�ɨ

���Դ˷��������Ҳ���

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "short", "$HIG$��$HIC$С��֮��$HIG$��$NOR$" );
	set( "owner", "ppp" );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/ou-cloud-club/room/room122",
]) );
	set( "light_up", 1 );
	setup();

	}
