// Room : /open/clan/ou-cloud-club/room/room49.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�����о���$NOR$" );
	set( "build", 10032 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/ou-cloud-club/room/room54.c",
  "eastdown" : "/open/clan/ou-cloud-club/room/room48",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
������һ�����֮�ŵ�ǰ��,��͵����ȴ�ƺ���Ҫ��ֹ�㿪��,
�����ź�����Ⱥħ������צ��׼��ӭ�ӿ���,�����ƺ����ʺ���˧��
�����ŷ�ʽǿ�н���,�����Ѱ��һ�ѿ��Կ�����Կ�װ�!!�������
����Լ�����������ź���,а��ĵط�Ҳ��������ľ�����!?
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
