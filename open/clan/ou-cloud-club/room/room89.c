// Room : /open/clan/ou-cloud-club/room/room89.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIG$����$NOR$" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "eastdown" : "/open/clan/ou-cloud-club/room/room76",
]) );
	set( "long", @LONG
��������ֻ�����������һ���գ�������ɽ�£��Һ����Ṧ�˵ã�
����̤�գ���������һ������ʱ����������ɽ�±ߣ��ű�סһ�����Է���
�÷�����ǵ��³���û�뵽$HIR$�ļ�$HIY$��ɽ$NOR$�������а�������˿ֲ���ֻҪѡ��
һ����������˺��˿��µġ�

LONG);
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "no_transmit", 1 );
	setup();

	}
