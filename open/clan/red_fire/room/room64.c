// Room : /open/clan/red_fire/room/room64.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ�$HIW$��$NOR$" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room65",
		"east"      : "/open/clan/red_fire/room/room53.c",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG


                         $HIC$ �q  �q  �q  �q 
                        �q�s�q�s�q�s�q�s
                      �q�s�q�s�q�s�q�s
                    �q�s�q�s�q�s�q�s
                  �q�s�q�s�q�s�q�s
                �q�s�q�s�q�s�q�s
                �s  �s  �s  �s

                        $HIY$�ι���

                    $HIM$�������������̣�
                    ������ˮˮ�޺ۣ�
                    ����������Ʈ�죻
                    ��ˮ�޺�Ī��ͷ��  $HIR$��õ $HIW$��$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "������" );

	}
