// Room : /open/clan/red_fire/room/room11.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
	set( "short", "$HIM$��$HIY$ʥ�� $HIC$������$HIM$��$NOR$" );
	set( "long", @LONG
    
                             $HIC$�� ���죩
                      $HIB$��     $WHT$________     $HIM$��
                       $WHT$�u��  ________    �v
               $HIB$����$WHT$�u �u   ________   �v   $HIM$���磩
                   $WHT$�u �u �u            �v �v �v
                    $WHT$�u                   �v �v
                     $WHT$�u     $HIW$�u��������     $WHT$�v
                          $HIW$�u  �����񨀨�      
            $HIR$��  $WHT$������   $HIW$ ��  ����������    $WHT$������  $BLU$��
                $WHT$��  ��   $HIW$ ��    ��������      $WHT$�� 
          $HIR$����$WHT$������   $HIW$ ��      ������    $WHT$������$BLU$��ˮ��
                          $HIW$��  ��    ����
                     $WHT$�v     $HIW$�ܣߣߨ���     $WHT$�u
                    $WHT$�v                   �u �u
                   �v  ���v  ___  ___  �u    �u
                $HIY$ ��  $WHT$�v �v   ___  ___   �u     $MAG$��
                       $WHT$�v    ___  ___    �u
                   $HIY$��ɽ��                $MAG$���ף�
                             $YEL$�� ���أ�$NOR$

     �ۣ���������$HIR$����$NOR$����е�һ��ѹ�ȸУ�ʹ��ȫ����񾭶���
     ��ǣ��......��е�ȫ��������ֻ����ǿ�ż�����ǰ����������
     ��һ���뿪����......��


LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "up" : "/open/clan/red_fire/room/room12.c",
  "down" : "/open/clan/red_fire/room/room10.c",
]) );
	setup();

	}
