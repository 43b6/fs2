// Room : /open/clan/ou-cloud-club/room/room111.c
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
	set( "short", "$HIR$��ħ��$HIW$����ˮ��$NOR$" );
	set( "owner", "bbsboss" );
	set( "object", ([
		"amount2"  : 12,
		"amount6"  : 1,
		"file6"    : "/open/magic-manor/obj/wood-ball",
		"amount7"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/mogi/castle/obj/blood-water",
		"file2"    : "/open/doctor/pill/human_pill",
		"file7"    : "/open/magic-manor/obj/water-ball",
		"amount5"  : 1,
		"file3"    : "/open/doctor/pill/gnd_pill",
		"file8"    : "/open/magic-manor/obj/golden-ball",
		"file9"    : "/open/magic-manor/obj/fire-ball",
		"amount4"  : 9,
		"amount9"  : 1,
		"amount1"  : 12,
		"file5"    : "/open/magic-manor/obj/soil-ball",
		"file1"    : "/open/doctor/pill/sky_pill",
		"amount3"  : 112,
	]) );
	set( "light_up", 1 );
	set( "build", 10015 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room112.c",
  "west" : "/open/clan/ou-cloud-club/room/room110",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
