// Room : /open/clan/ou-cloud-club/room/room50.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�����о���$NOR$" );
	set( "build", 10018 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room51.c",
  "west" : "/open/clan/ou-cloud-club/room/room48",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
�����Ļ�������,��Ϊ�����о����������͵�ұ����,
�����洦�ɼ����ֽ�̻Ի͵�������Ʒ,�������ذ嶼�Ƕ���
һ���֮��,������һ������������Ĳ�˹��̺,���ϰ����,
�����Ʋ;��Լ���˸������������̨,�����ϳ��˻ʹ�֮��
,�����Ҳ�Ҳ������Ư�����ĵĵط���.
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
