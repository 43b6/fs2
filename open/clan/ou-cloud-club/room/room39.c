// Room : /open/clan/ou-cloud-club/room/room39.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
����ǽ�ϵĹ�����̨��,�谵������������Ÿ��ܵĿ���ҡ����,
����ϡ�ɼ���ǽ�����ǵ�ɢ���Ű߲���Ѫ��,����ʹ�㵱����Ż,����
�˸е������,����ǰ��Щ����ֵ���Ӱ����Ŀ�ĵ��߶���,���۽���
��͵͵�۲�,�ž�������Щ������֫��ٲ��Ʋ�ȫ��ʳʬ��,��Ȼ����
���������ǻ����Ĺ��ﲻ��Ϊ��,�����Ǳ�������,�����ǿֲ�����
�ݾͿ��������������������,���Ǿ��ٵ͵�ͨ����!!
LONG);
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "light_up", 1 );
	set( "short", "$HIW$��ħ��$HIR$���$NOR$" );
	set( "object", ([
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file6"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/prayer/obj/boris-cloth",
		"file3"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"amount2"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"file2"    : "/open/prayer/obj/boris-cloth",
	]) );
	set( "build", 10034 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/ou-cloud-club/room/room38.c",
		"east"      : "/open/clan/ou-cloud-club/room/room40.c",
]) );
	set( "no_transmit", 1 );
	setup();

	}
