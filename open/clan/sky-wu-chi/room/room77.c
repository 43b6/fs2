// Room : /open/clan/sky-wu-chi/room/room77.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "��������" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
ֻ��������������С����ȴ��֪������һ���á�������һ��
���ƾ��ֻص���ԭ�ء��������ء�Ǭ������֮���һ��·����
���Ҵ�����Ȼֻ��Խ��Խ�㡣������ž������������������Ӱ
���㽹��������Ծ�����ۣ������������ϱ��Ǻ��������ǹ�ͺͺ
����ʯ�����汱�涼�ǻ�������ɫ�ͷף�������ͷ��ֻ������ͷ
���ۻ���

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/sky-wu-chi/room/room98.c",
  "west" : "/open/clan/sky-wu-chi/room/room38",
]) );
	set( "cmkroom", 1 );
	setup();

	}
