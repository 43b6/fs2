// Room : /open/clan/ou-cloud-club/room/room124.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
����������ɽׯ�����ſڣ���......��..��..����¥ร�
�Ȳ������ĺ����ģ���ʹ�������������˽�ȥ��


$HIR$    �q�s�T�p�T  ��      �T�T�T�j�T�T�T��        �U         �T�T�T�p�T�T�p�T�T
$YEL$  �q�s  �T�p�T  �d�T�T�q�T�T�T�p�T�T�T�r        �U         ��    �`    �`
$HIY$  �s�U�T�T�p�T�t�s  �U�U  ��  �U  ��  �U        �U         �U    �U    �U
$HIG$    �U  �q�s�[�U    �U    �T�T�T�T�T    �U      �U      �� �^�T�T�g�T�T�p�T�T
$HIC$    �U�q�s  �U�t�r�q�s  �T�T�T�j�T�T�T  �U      �U      �U �X�T�T�g    �U
$HIB$    �U�s    �U  �t�r    �q�T�T�s        �U      �U      �U �U    �U    �U
$MAG$    �U    �T�s�q�s�t��  �t�T�T�T�T�T�r  �t�T�T�T�m�T�T�T�g ��    �U�T�T�m�T�T
$NOR$

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"south"     : "/open/clan/ou-cloud-club/room/room245",
		"enter"     : "/open/clan/ou-cloud-club/room/room126.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "short", "$HIC$ɽׯ$HIM$����$NOR$" );
	set( "build", 10318 );
	set("objects", ([ /* sizeof() == 1 */
		"/open/clan/ou-cloud-club/npc/npc7" : 1,
		"/open/clan/ou-cloud-club/npc/npc10" : 1,
		"/open/clan/ou-cloud-club/npc/npc13" : 1,
]) );

	}
