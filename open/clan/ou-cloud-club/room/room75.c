// Room : /open/clan/ou-cloud-club/room/room75.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
������Ǵ����е��ļ���ɽ������û���൱�㹻�����š���
�ݼ׵�������Ҫ���߹��˴�ֻ�»�������ٲ����ĵز���ֻ����
����Χ���ĸ����򣬸������Ƕ��ǣ���������ɱ����ƫƫֻ����
��һ��������ȷ�ĵ�·���������Ծ��񣮣�������
����
LONG);
	set( "short", "$HIR$�ļ�$HIY$��ɽ$NOR$��" );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 5 */
  "southup" : "/open/clan/ou-cloud-club/room/room114.c",
  "westup" : "/open/clan/ou-cloud-club/room/room76.c",
  "eastup" : "/open/clan/ou-cloud-club/room/room113.c",
  "down" : "/open/clan/ou-cloud-club/room/room74",
  "northup" : "/open/clan/ou-cloud-club/room/room86.c",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}
