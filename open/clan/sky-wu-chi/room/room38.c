// Room : /open/clan/sky-wu-chi/room/room38.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "clan_room", "����޼�" );
	set( "long", @LONG
ֻ��������������С����ȴ��֪������һ���á�������һ��
���ƾ��ֻص���ԭ�ء��������ء�Ǭ������֮���һ��·����
���Ҵ�����Ȼֻ��Խ��Խ�㡣������ž������������������Ӱ
���㽹��������Ծ�����ۣ������������ϱ��Ǻ��������ǹ�ͺͺ
����ʯ�����汱�涼�ǻ�������ɫ�ͷף�������ͷ��ֻ������ͷ
���ۻ���

LONG);
	set( "short", "��������" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 4 */
		"north"     : "/open/clan/sky-wu-chi/room/room90.c",
		"east"      : "/open/clan/sky-wu-chi/room/room77.c",
		"west"      : "/open/clan/sky-wu-chi/room/room39.c",
]) );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	setup();

	}
