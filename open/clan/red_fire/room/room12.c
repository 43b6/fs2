// Room : /open/clan/red_fire/room/room12.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "short", "$HIM$��$HIC$�� �� ��$HIM$��$NOR$" );
	set( "no_transmit", 1 );
	set( "clan_room", "������" );
	set( "cmkroom", 1 );
	set( "long", @LONG

                    $HIC$��$HIW$�޼���̫����̫��������$HIC$��

                    ��$HIW$�����������������˹�$HIC$��

�˹���$NOR$�����ӹŴ��й�֮�׾������ݱ������$HIC$��$NOR$��$YEL$��$NOR$��$BLU$��$NOR$��$HIR$��$NOR$��$HIB$��$NOR$��$HIY$��$NOR$��
$HIM$��$NOR$��$MAG$��$NOR$����Ϊ��˸�������һ̤�����֮����������һ�����ʣ�����
Ϊ�λ���$HIC$�˹���$NOR$�ڴˣ���ʱǿ�ҵĺ�������ʹ���㣬���㲻���������봳
һ������


LONG);
	set( "exits", ([ /* sizeof() == 2 */
  "down" : "/open/clan/red_fire/room/room11.c",
  "enter" : "/open/clan/red_fire/room/room20.c",
]) );
	setup();

	}
