// Room : /open/clan/red_fire/room/room16.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"up"        : "/open/clan/red_fire/room/room157.c",
]) );
	set( "cmkroom", 1 );
	set( "clan_room", "������" );
	set( "short", "$HIC$��$HIW$������ $GRN$ʯ��$HIC$��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "object", ([
		"amount9"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
	]) );
	set( "long", @LONG

 $HIY$�X�T�h�h�T�T�T�T�T�T�T�T�h�h�T�[
 �������� $HIR$��    ��    �� $HIY$��������
   �\�n�n�T�T�T�T�T�T�T�T�n�n�_
     $HIC$���                $HIC$���
     $HIC$���                $HIC$���
     $HIC$���      $YEL$�q�r$HIW$�V�T�T$HIC$���$HIW$�T�T�T�T�T�Y$GRN$�q�����r
     $HIC$���    $YEL$�q�r$HIW$�V�T�T�T$HIC$���$HIW$�T�T�T�T�Y$YEL$�q�r$GRN$������
     $HIC$���  $YEL$�q�r$HIW$�V�T�T�T�T$HIC$���$HIW$�T�T�T�Y$YEL$�q�r$GRN$�q���r��
     $HIC$���$YEL$�q�r$HIW$�V�T�T�T�T�T$HIC$���$HIW$�T�T�Y  $GRN$�q�����r��$YEL$�q�r
     $HIC$���$YEL$�r$HIW$�V�T�T�T�T�T�T$HIC$���$HIW$�T�Y$GRN$�q���r��  �����q���r
     $HIC$���$HIW$�V�T�T�T�T�T�T�T$HIC$���$HIW$�Y  $GRN$���q�������r����  ��
   $YEL$�q$HIC$���$HIW$�T�T�T�T�T�T�T�T$HIC$���$HIW$  $GRN$�q���r��  ������������
 $YEL$�q�r$HIC$���$HIW$�T�T�T�T�T�T�T�T$HIC$���$YEL$�r$GRN$������$YEL$�q�r$GRN$����$YEL$�q�r$GRN$����$NOR$


LONG);
	setup();

	}
