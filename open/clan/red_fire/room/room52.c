// Room : /open/clan/red_fire/room/room52.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ�$HIW$��$NOR$" );
	set( "object", ([
		"file5"    : "/open/capital/room/king/obj/dagger1",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file1"    : "/open/badman/obj/evil_claw",
		"amount5"  : 1,
		"amount3"  : 1,
	]) );
	set( "build", 10133 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG

                          $HIC$�q  �q  �q  �q 
                        �q�s�q�s�q�s�q�s
                      �q�s�q�s�q�s�q�s
                    �q�s�q�s�q�s�q�s
                  �q�s�q�s�q�s�q�s
                �q�s�q�s�q�s�q�s
                �s  �s  �s  �s

                        $HIY$ĩ����

                    $HIM$�������Ŵ��ɾ���
                    �κο��ȴ�ɿգ�
                    ˭�������ճɾ죻
                    Ī�������ѳ��档  $HIR$��õ $HIW$��$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "������" );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/red_fire/room/room53",
		"south"     : "/open/clan/red_fire/room/room49.c",
]) );
	setup();

	}
