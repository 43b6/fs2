// Room : /open/clan/sky-wu-chi/room/room79.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "ͨ��ǰ��" );
	set( "owner", "aow" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/u/h/houng/eq/armband1",
		"amount4"  : 1,
	]) );
	set( "build", 12891 );
	set( "long", @LONG
��ֱ��ͨ����һֱͨ����ͷ����������û���κ���Ʒ 
����ȴ���Ÿ߼��ĵ�̺�������������ɡ�����֮��ǽ�ϻ��� 
�о޴�Ļ�ѣ���ҡҷ�Ļ�������ͨ����ҫ�������ֹ���
����������ë���Ȼ�������������һ�����������ķ�����
�ϳ˵��������������������������͵�ר����ȥ��

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/sky-wu-chi/room/room18",
  "north" : "/open/clan/sky-wu-chi/room/room84.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
