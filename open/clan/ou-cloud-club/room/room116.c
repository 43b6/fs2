// Room : /open/clan/ou-cloud-club/room/room116.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��ɽ$NOR$ɽ��" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "eastdown" : "/open/clan/ou-cloud-club/room/room79",
]) );
	set( "long", @LONG

$HIY$    �X�T�T�T�j�T�T�T�a             �U               �U   �d�T�T�T�j
            �U                     �U             �U�U�U �a�T�X�T�a
    �X�T�T�T�p�T�T�T�a     �U      �U      �U     �U�U�U �X�T�a�T�[
          �X�a�[           �U      �U      �U     �U�U�U �a�T�p�T�^
        �X�a  �^�[         �U      �U      �U     �^�m�a   �T�p�T
    �^�T�a      �^�T�a     �^�T�T�T�m�T�T�T�a            �T�T�p�T�T$NOR$

LONG);
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
