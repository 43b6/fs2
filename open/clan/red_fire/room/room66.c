// Room : /open/clan/red_fire/room/room66.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ�$HIW$��$NOR$" );
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

                        $HIY$������

                    $HIM$����ʵʵ����ʵ��
                    ����ټ�����٣�
                    ��ʵ��ٽ��ѿգ�
                    ��������һ���Ρ�  $HIR$��õ $HIW$��$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "������" );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/red_fire/room/room63.c",
		"east"      : "/open/clan/red_fire/room/room67",
]) );
	setup();

	}
