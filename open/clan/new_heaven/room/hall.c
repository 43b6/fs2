// Room : /open/clan/new_heaven/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "���ô��ſ�" );
	set( "objects", ([ /* sizeof() == 3 */
  "/u/b/bss/train2" : 1,
]) );
	set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/new_heaven/room/room5.c",
  "north" : "/open/clan/new_heaven/room/room2.c",
]) );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
�����������õĴ��ſ�, ����Ӧ��ֻ����ʦ�ſ��Խ�����,
��Ҫ�Ǹ���ʦ���и����԰��ɵĵط�
LONG);
	set( "no_clean_up", 0 );
	setup();

	}
