// Room : /open/clan/ou-cloud-club/room/room24.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
������һ���ռ伫���쳣�����򣮣���ֻ����Χ����
�˸����͵Ķ�������͸�����߲ʹ�â���ѵ�������Ǳ�ׯ
������֮һ��$HBBLU$��$HBYEL$��$HBRED$ɱ$HBCYN$��$HBGRN$��$NOR$������˵������Ϊ���ð��ڸ���
һ������������Ա�ׯׯ����������ռ��и�Ĺ�������
�������Ϊ�˸��ռ䣬��ͨ���˸����ص����磬����֮��
����һ���ĳ��ϻ�˵���˸�ͨ�����ᵽ��һ�����յ���
�򣬶��Ҿ�Ȼ��ׯ������Ҳδ������Ǹ����ص������
�����κ��˵õ�[0;1;5;33m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mb[1;5m��[1;5mU[1;5m��[1;5mB[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mU[0m������������


                    $HIY$���$NOR$
                 
              $HIC$����$NOR$         $HIM$�ý�$NOR$       
         
        $YEL$����$NOR$     $HBBLU$��$HBYEL$��$HBRED$ɱ$HBCYN$��$HBGRN$��$NOR$      $CYN$����$NOR$

              $HIB$���$NOR$         $HIG$����$NOR$  

                    $HIR$����$NOR$



LONG);
	set( "short", "$HBBLU$��$HBYEL$��$HBRED$ɱ$HBCYN$��$HBGRN$��$NOR$" );
	set( "build", 10030 );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/ou-cloud-club/room/room25.c",
		"down"      : "/open/clan/ou-cloud-club/room/room22",
		"north"     : "/open/clan/ou-cloud-club/room/room12.c",
]) );
	set( "light_up", 1 );
	setup();

	}
