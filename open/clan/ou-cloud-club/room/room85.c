// Room : /open/clan/ou-cloud-club/room/room85.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��ɽ$NOR$ɽ��" );
	set( "no_clean_up", 0 );
	set( "long", @LONG

$HIC$    �X�T�T�T�j�T�T�T�a$HIY$             �U        $HIG$      �T�j�T �T�j�T�T
$HIC$            �U        $HIY$             �U        $HIG$        �U   �X�a�T�[
$HIC$    �X�T�T�T�p�T�T�T�a$HIY$     �U      �U      �U$HIG$        �U   �d�T�T�g
$HIC$          �X�a�[      $HIY$     �U      �U      �U$HIG$        �U   �d�T�T�g
$HIC$        �X�a  �^�[    $HIY$     �U      �U      �U$HIG$      �[�U   �^�j�j�a
$HIC$    �^�T�a      �^�T�a$HIY$     �^�T�T�T�m�T�T�T�a$HIG$      �^�a   �T�a�^�T$NOR$

LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
  "down" : "/open/clan/ou-cloud-club/room/room84",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	setup();

	}
