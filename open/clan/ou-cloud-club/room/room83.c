// Room : /open/clan/ou-cloud-club/room/room83.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIR$�ļ�$HIY$��ɽ$NOR$��(����ֹ�)" );
	set( "no_clean_up", 0 );
	set( "long", @LONG
������Ǵ����е��ļ���ɽ������û���൱�㹻�����š���
�ݼ׵�������Ҫ���߹��˴�ֻ�»�������ٲ����ĵز���ֻ����
����Χ���ĸ����򣬸������Ƕ��ǣ���������ɱ����ƫƫֻ����
��һ��������ȷ�ĵ�·���������Ծ��񣮣�������
����
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 5 */
  "southdown" : "/open/clan/ou-cloud-club/room/room82",
  "southup" : "/open/clan/ou-cloud-club/room/room112.c",
  "eastup" : "/open/clan/ou-cloud-club/room/room111.c",
  "northup" : "/open/clan/ou-cloud-club/room/room110.c",
  "westup" : "/open/clan/ou-cloud-club/room/room84.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	setup();

	}
