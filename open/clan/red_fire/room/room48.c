// Room : /open/clan/red_fire/room/room48.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ�$HIW$��$NOR$" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room63",
		"north"     : "/open/clan/red_fire/room/room50.c",
	]) );
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

                        $HIY$Ц�쳾

                    $HIM$���ĺ����Ĳ�����
                    ���������Ѿ���
                    ���˽�������ѣ�
                    ��Ц�쳾��Ϊ˭��  $HIR$��õ $HIW$��$NOR$


LONG);
	set( "cmkroom", 1 );

	}
