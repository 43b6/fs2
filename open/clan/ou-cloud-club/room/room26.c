// Room : /open/clan/ou-cloud-club/room/room26.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$YEL$˿��֮·$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
��ɳ����,���յ���,������������һƬ���ɫ�Ĵ�ɳĮ֮��,
��ϡ���Կ�����һ��С·�ʶ�������,������ҹ����������ͨ��
�����ıؾ���·,��������ɮ֮���Ѻܾ�û�����߹���,�뵽ǧ����
ǰ��������֮·,��Ȼ���������,������������.
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room25",
  "southwest" : "/open/clan/ou-cloud-club/room/room27.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
