// Room : /open/clan/ou-cloud-club/room/room84.c
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
	set( "exits", ([ /* sizeof() == 2 */
  "up" : "/open/clan/ou-cloud-club/room/room85.c",
  "eastdown" : "/open/clan/ou-cloud-club/room/room83",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	setup();

	}
