// Room : /open/clan/ou-cloud-club/room/room113.c
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
	set( "short", "$HIG$����$NOR$" );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "westdown" : "/open/clan/ou-cloud-club/room/room75",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}
