// Room : /open/clan/ou-cloud-club/room/room76.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIR$�ļ�$HIY$��ɽ$NOR$��" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 5 */
  "eastup" : "/open/clan/ou-cloud-club/room/room90.c",
  "northup" : "/open/clan/ou-cloud-club/room/room77.c",
  "westup" : "/open/clan/ou-cloud-club/room/room89.c",
  "southup" : "/open/clan/ou-cloud-club/room/room91.c",
  "eastdown" : "/open/clan/ou-cloud-club/room/room75",
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
