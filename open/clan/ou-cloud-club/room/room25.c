// Room : /open/clan/ou-cloud-club/room/room25.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "��������" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
������ȥ����һ���޼ʵĴ�ɳĮ��,���Ž��������ɳĮ��
�˺����ܹ���Ȼ���ص�,�����������ȱ��ˮ�ֶ�����������
ɹ����,����ڽ���ǰ��Ҫ��׼�����㹻��ˮ����ʳ�~~�����
��û׼���õĻ�����������ȥ�����Ĺ����.

LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room24",
  "west" : "/open/clan/ou-cloud-club/room/room26.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
