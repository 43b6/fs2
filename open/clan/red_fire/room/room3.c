// Room : /open/clan/red_fire/room/room3.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/red_fire/room/room4",
  "north" : "/open/clan/red_fire/room/room5.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "������" );
	set( "long", @LONG


                          $HIY$������$NOR$  $HIC$��$NOR$    $HIC$��$NOR$  $HIY$������$NOR$


        $HIR$������$NOR$����������������$HIR$��$HIG$��$HIY$��$HIC$��$NOR$����˵$HIR$������$NOR$����������Ϊ������
        ��ͻȻ���򵽣���ѧ֮��߾��粢�ǳ�Ϊ���������򶫷����ܣ����
        �������̣�һ����ϣ�����ô�ҵ���Ǳ��������ѧ����һ����Ҳϣ��
        ���ڽ��ܹ�������С������˵������Ϊ������ѧ֮�߳ˣ�Ŀǰ�չ���
        ����$HIR$����$HIY$ʥ��$HIC$������$NOR$���Ҿ�˵������һλ�����ˣ����������Ҫһ��
        �����ķ�ɣ��ض�Ҫȥ$HIY$ʥ��$NOR$��һ�؆��� 


LONG);
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "short", "$HIY$��$HIR$����$NOR$ $HIC$����$HIY$��$NOR$" );
	set( "build", 140 );
	setup();

	}
