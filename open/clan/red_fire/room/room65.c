// Room : /open/clan/red_fire/room/room65.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ�$HIW$��$NOR$" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room58",
		"east"      : "/open/clan/red_fire/room/room64.c",
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

                        $HIY$ӽ��ɽ

                    $HIM$��ɽ���˺δ�Ѱ��
                    ���к�������ã�
                    ����һ�������ͣ�
                    ���˽�ӵ�˽�ɽ��  $HIR$��õ $HIW$��$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "������" );

	}
