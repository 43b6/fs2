// Room : /open/clan/ou-cloud-club/room/room64.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$ʱ�ơ���$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
  "east" : "/open/clan/ou-cloud-club/room/room66.c",
  "west" : "/open/clan/ou-cloud-club/room/room65.c",
  "eastdown" : "/open/clan/ou-cloud-club/room/room61",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
�����ͨ·�̶�������,Ȼ����������ԵĿ��Կ���һ��
���ͱ�,���������ǲ�������ϡ�������Ƶ�שǽ.ǽ�Ϲ���һ��
�޽�,�������������״���еĹ��Ÿ�,��,�,��,ǹ...�ȸ�ʽ
����,�����ͷų���������Ϊ�ʵ�ѶϢ,ֻ��,����̤�����
����ʮ��֮��ʱ,���������Ž�������ת��������...
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
