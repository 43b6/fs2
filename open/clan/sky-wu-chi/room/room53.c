// Room : /open/clan/sky-wu-chi/room/room53.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "$HIY$����ɽׯ$HIW$--$HIG$������$NOR$" );
	set( "long", @LONG
�������ĵ�������$HIY$����ɽׯ$NOR$ʱ��һ���������������㱻��ͻ��
�����ĵ����ŵĵ�ս�ľ���̧ͷһ����һ���Ҷ�д��$HIW$��$HIC$��Ȼ�����$HIW$��$NOR$
��ԭ�����ߵ�����糴彣�������޹��ָ���ĵ��ݣ������˵������
�������������ӵ��ߵĹ�����쳡�
LONG);
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/room8",
]) );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	setup();

	}
