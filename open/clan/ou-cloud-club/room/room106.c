// Room : /open/clan/ou-cloud-club/room/room106.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
�����ˮ�����������,���������ȿ����й�֮����
����,����ֻ������Ӿ�ķ�ʽǰ����,�����ֲ�֪��ˮ������
ʲô������������Ӿ����,�������˵�ս�ľ���,�������
��֪����,��Ȼ�书��ǿ,Ψһ�����㷳�յ�,ֻ�����ǻ�Ūʪ
���ϵĻ������ΰ� :p
LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIW$��ħ��$HIR$����ˮ��$NOR$" );
	set( "owner", "bbsboss" );
	set( "object", ([
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file5"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount1"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount2"  : 1,
		"amount4"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10894 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room110.c",
  "west" : "/open/clan/ou-cloud-club/room/room105",
]) );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	setup();

	}
