// Room : /open/clan/sky-wu-chi/room/room86.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "������Է�" );
	set( "owner", "juliet" );
	set( "object", ([
		"amount6"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file9"    : "/open/killer/obj/kill_yar_head",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"file6"    : "/daemon/class/fighter/ywhand",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 14282 );
	set( "long", @LONG
      /��              ��\
        ��   �ܣߣߣߣߣߣ� ��
        �� ����    ���������v
         �M                  ��    $HBCYN$��������һ��������ҹ�����Ŋ�    $NOR$
         ��   /��\    /��\   ��    $HBCYN$  �������ǹ�ȥ�ĵ��ε�        $NOR$
         ��   ��ZZ   ZZ  ��  ��    $HBCYN$    ��Ϊ��ȥ��̫��̫�����õĻ���$NOR$
        ��    \��/    \��/    ��   $HBCYN$      �����ڲ�֪�����оͻ�����  $NOR$
         ����      ��      �ߨM    $HBCYN$        ���������������ôԶ    $NOR$
         ���v��    ��    �ߣ�_     $HBCYN$          ����Ȼ˼���Ŋ�        $NOR$
         �q������������������
        ��   ��           /���\����
       ��____��  �� ��  �� .��. ����
             \���/ ����ܡ�  
LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/sky-wu-chi/room/room85",
]) );
	set( "cmkroom", 1 );
	setup();

	}
