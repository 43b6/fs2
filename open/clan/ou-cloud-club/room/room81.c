// Room : /open/clan/ou-cloud-club/room/room81.c
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
  "northdown" : "/open/clan/ou-cloud-club/room/room80",
  "southup" : "/open/clan/ou-cloud-club/room/room106.c",
  "northup" : "/open/clan/ou-cloud-club/room/room105.c",
  "westup" : "/open/clan/ou-cloud-club/room/room104.c",
  "eastup" : "/open/clan/ou-cloud-club/room/room82.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	setup();

	}
