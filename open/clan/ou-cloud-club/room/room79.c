// Room : /open/clan/ou-cloud-club/room/room79.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIR$�ļ�$HIY$��ɽ$NOR$��" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "westup" : "/open/clan/ou-cloud-club/room/room116.c",
  "northdown" : "/open/clan/ou-cloud-club/room/room78",
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
