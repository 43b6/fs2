// Room : /open/clan/red_fire/room/room50.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ�$HIW$��$NOR$" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room48",
		"north"     : "/open/clan/red_fire/room/room58.c",
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
                         
                        $HIY$������           

                    $HIM$����������������
                    �������Ŀ�������
                    Ӣ����Ů�ۺ�����
                    һͳ��ɽ����ء�  $HIR$��õ $HIW$��$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "������" );

	}
