// Room : /open/clan/red_fire/room/room10.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
	set( "short", "$HIM$��$HIR$����$HIY$ʥ�� $HIC$������$HIM$��$NOR$" );
	set( "long", @LONG


                             $HIY$��  $HIC$��  ��  ��  $HIY$��$NOR$


        ��Ȼ����������Ǵ�˵�е�$HIR$����$HIY$ʥ��$NOR$�ˣ���ʱ��Ҳ���ܵ�$HIY$ʥ��$NOR$��ׯ��
        �����գ���������ʱ��������������������ȥ������һ��$HIW$������
        ��$NOR$�����������һ��һ�׵�������ȥ........��


LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "up" : "/open/clan/red_fire/room/room11.c",
  "out" : "/open/clan/red_fire/room/room7",
]) );
	setup();

	}
