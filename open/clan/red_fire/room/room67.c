// Room : /open/clan/red_fire/room/room67.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ�$HIW$��$NOR$" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room66",
		"east"      : "/open/clan/red_fire/room/room51.c",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG

               $HIC$ �r  �r  �r  �r
                �t�r�t�r�t�r�t�r
                  �t�r�t�r�t�r�t�r
                    �t�r�t�r�t�r�t�r
                      �t�r�t�r�t�r�t�r
                        �t�r�t�r�t�r�t�r
                          �t  �t  �t  �t

                        $HIY$���˳�

                    $HIM$�为�ˮƮ������
                    ����˼������ͷ��
                    �������˵����
                    �¶�������˭֪��  $HIR$��õ $HIW$��$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "������" );

	}
