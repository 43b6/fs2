// Room : /open/clan/sky-wu-chi/room/room85.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "������ſ�" );
	set( "owner", "juliet" );
	set( "object", ([
		"amount10" : 1,
		"amount2"  : 1,
		"file4"    : "/open/mogi/castle/obj/lochagem",
		"amount3"  : 1,
		"file10"   : "/open/dancer/obj/yuaboots",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/dancer/obj/yuaboots",
		"file7"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/daemon/class/fighter/figring",
		"file2"    : "/open/killer/obj/k_ring",
		"file8"    : "/daemon/class/fighter/figring",
		"file9"    : "/open/fire-hole/obj/r-pill",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 295,
		"amount9"  : 20,
	]) );
	set( "light_up", 1 );
	set( "build", 14360 );
	set( "long", @LONG
'  .  '  .  '  .��  '  .  '  .  ' .  '  .  '  .  ' ��.  ' .
'  . ' . ' .  ��' .  '  .  '  .  '  .  '  .  '  .  '  . ' .
            ����            ���ѵļ���������ů��
    ��������������                    �u�v
  ������������������                �u    �v
  ���q�r��  �� �� ��          �u�v�u        �v�u�v
                                                                                
  ��������  �� �� ��       �u                      �v
�n���ةةة����������n�n�u�n�n�n���n�n�n���n�n�n�n���n�v�n��
--
==========================================================

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "north" : "/open/clan/sky-wu-chi/room/room4",
  "west" : "/open/clan/sky-wu-chi/room/room86.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
