// Room : /open/clan/ou-cloud-club/room/room105.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
�ΰ��ε�,����ˮ�����м�Ƭľ��Ʈ��,�����ⲻ��ǰ�⸽
��Ӧ����������,������Ȼ��û����,����ר���ΰ�!!�����ֵ�
����ˮ�ɲ��Ǻ����,���ŵ������Ҳ������Щ,˵������ˮ��
���ж���,�����ܶ�ˮ�п��ܷ�����״����������.
LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIW$��ħ��$HIR$����ˮ��$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file4"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file2"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
	]) );
	set( "build", 10700 );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room106.c",
  "west" : "/open/clan/ou-cloud-club/room/room104",
]) );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	setup();

	}
