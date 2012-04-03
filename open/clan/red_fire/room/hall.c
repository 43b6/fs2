// Room : /open/clan/red_fire/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "$HIY$��$HIR$������$NOR$ $HIC$�㳡$HIY$��$NOR$" );
	set( "build", 623 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room36.c",
		"north"     : "/open/clan/red_fire/room/room4.c",
		"up"        : "/open/clan/red_fire/room/room113.c",
		"down"      : "/open/clan/red_fire/room/room136.c",
		"west"      : "/open/clan/red_fire/room/room38.c",
		"south"     : "/open/clan/red_fire/room/room24.c",
		"enter"     : "/open/clan/red_fire/room/room17.c",
]) );
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "stone" : "
                                      $HIY$�q�r
                                  $HIC$�q�����r
                                  ��  ����
                                $HIY$�q�r$HIC$  �������r
                              $HIY$�q�r$HIC$�q���r��  ��
                           $HIY$�q�r$HIC$�q�����r��$HIY$�q�r�r
                          $HIC$�q���r��    ���q���r$HIY$�q�r
                      $HIC$�q�����q�������r����  �����r
                      ���q���r  ��  ����������  ��
                    $HIY$�q�r$HIC$������$HIY$�q�r  $HIC$��$HIY$�q�r$HIC$���� $HIY$�q�r

          $HIC$ʥ��$HIY$��$NOR$������˵����λ��$HIY$ʥ��$HIC$������$NOR$��$HIR$ʥ��ɽ$NOR$����Ϊ��ȡ
          ��$HIR$��$HIG$��$HIY$��$HIB$��$NOR$���ھ���$HIM$����$NOR$ʩ���������ۺϺ󣬲ſɵõ���
          $HIY$��ʯ$NOR$����˵����$HIM$��Ӳ����$NOR$��$HIM$��Ӳ����$NOR$����ֻҪ���ʵ�����
          ������$HIY$��ʯ$NOR$������д��


",
]) );
	set( "long", @LONG


                                 $HIY$��$HIR$������$NOR$ $HIC$�㳡$HIY$��$NOR$


        ����������Ľ����������ٴε�֤������Ṧ�Ƿ���̧ͷ������ȥ......
        ��......�ô�Ĺ㳡�����������ô�δ������$HIY$��ʯ$NOR$����$HIR$����$NOR$����״�����
        ����Ϊ����Щ$HIY$��ʯ$NOR$����ɫ����ʺ죿�ѵ�......������Ǵ�˵�е��˼���
        ������$HIR$������$NOR$�����ٴλ������ܣ�ͻȻ�����㿴����һ������˼�����..
        ....$HIC$ʥ��$HIY$��$NOR$(look stone)Ϊ�λ������$HIR$������$NOR$�У���һ�����ľ��Ȱ�����
        ��ǿ�ҵĺ����ģ�ʹ��Ͻ���̤����ڣ��˽���һ�е����ࡣ






LONG);
	set( "no_clean_up", 0 );
	setup();
	call_other( "/obj/board/red_fire_b", "???" );

	}
