// Room : /open/clan/new_heaven/room/room2.c
 inherit "/open/clan/std/act.c";

void create()
{
        seteuid(getuid());
	set( "short", "�Ƶ�" );
	set( "objects", ([ /* sizeof() == 1 */
  "/open/clan/new_heaven/npc/npc3" : 1,
]) );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/new_heaven/room/hall",
  "north" : "/open/clan/new_heaven/room/room4.c",
]) );
	set( "outdoors", "/open/clan" );
	set( "cmkroom", 1 );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	set( "clan_room", 0 );
	set( "long", @LONG
�����������ɵ��ߵ�, �ߵ�ʱ��С�ĵ�, ��ˤ��ȥ��
LONG);
	set( "action", ([ /* sizeof() == 1 */
  "nod" : ([ /* sizeof() == 7 */
      "filename" : "",
      "later_msg" : "",
      "before_msg" : "",
      "msg" : "",
      "keyword" : "",
      "err_msg" : "",
      "type" : "action_move",
    ]),
]) );
	set( "item_desc", ([ ]) );
	set( "no_clean_up", 0 );
	setup();

	}
