// Room : /open/clan/red_fire/room/room7.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
	set( "short", "$HIY$��$HIR$���� $HIC$��� $HIM$����$HIY$��$NOR$" );
	set( "long", @LONG
���������ﲻ��ͣ������������������ǰ����һ���û��ɫ���ɵ�$HIM$��
��$NOR$�������һ���������ѵ�������$HIR$������$NOR$�𣿰�........����ͷһ��ͻ
Ȼ�����˵��괫˵��$HIY$ʥ��$NOR$���ѵ�������Ǵ�˵�е�$HIR$����$HIY$ʥ��$NOR$����$HIC$������$NOR$��
��ʱ�������Ҫ��$HIY$ʥ��$NOR$ǰ�������������ƿ������Ȼ��Ĵ���......��


LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
  "north" : "/open/clan/red_fire/room/room31.c",
  "enter" : "/open/clan/red_fire/room/room10.c",
  "south" : "/open/clan/red_fire/room/room6.c",
]) );
	setup();

	}
