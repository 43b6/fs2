// Room : /open/clan/ou-cloud-club/room/room95.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
��������ֻ�����������һ���գ�������ɽ�£��Һ����Ṧ�˵ã�
����̤�գ���������һ������ʱ����������ɽ�±ߣ��ű�סһ�����Է���
�÷�����ǵ��³���û�뵽$HIR$�ļ�$HIY$��ɽ$NOR$�������а�������˿ֲ���ֻҪѡ��
һ����������˺��˿��µġ�

LONG);
	set( "no_clean_up", 0 );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "short", "$HIG$����$NOR$" );
	set( "exits", ([ /* sizeof() == 2 */
		"southdown" : "/open/clan/ou-cloud-club/room/room78",
]) );
	set( "no_transmit", 1 );
	setup();

	}
