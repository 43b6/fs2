// Room : /open/clan/ou-cloud-club/room/room77.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIR$�ļ�$HIY$��ɽ��$NOR$" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 5 */
  "northup" : "/open/clan/ou-cloud-club/room/room93.c",
  "westup" : "/open/clan/ou-cloud-club/room/room92.c",
  "eastup" : "/open/clan/ou-cloud-club/room/room78.c",
  "southdown" : "/open/clan/ou-cloud-club/room/room76",
  "southup" : "/open/clan/ou-cloud-club/room/room94.c",
]) );
	set( "long", @LONG
������Ǵ����е��ļ���ɽ������û���൱�㹻�����š���
�ݼ׵�������Ҫ���߹��˴�ֻ�»�������ٲ����ĵز���ֻ����
����Χ���ĸ����򣬸������Ƕ��ǣ���������ɱ����ƫƫֻ����
��һ��������ȷ�ĵ�·���������Ծ��񣮣�������
����
LONG);
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "no_transmit", 1 );
	setup();

	}
