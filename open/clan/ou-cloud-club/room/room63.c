// Room : /open/clan/ou-cloud-club/room/room63.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$ʱ�ơ���$NOR$" );
	set( "build", 40 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "down" : "/open/clan/ou-cloud-club/room/room57",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
���ʵ�����֮��,��������ֻ�Ǹ��տ��ķ���,����ɢ����
��������һ��ı���,�����������, ��Ҳ����ε����ʹ��
��ʶ��,������������������,Ӧ�ò�����һ��,��λ����ǰ
ͷ���ñ������,�䶯��Ϊ��,ֵ��˼��,�����ܳ�Ϊ�����Ļ�
���!!
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
