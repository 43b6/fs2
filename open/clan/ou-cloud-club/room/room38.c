// Room : /open/clan/ou-cloud-club/room/room38.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$���$NOR$" );
	set( "object", ([
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10011 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "long", @LONG
����ǽ�ϵĹ�����̨��,�谵������������Ÿ��ܵĿ���ҡ����,
����ϡ�ɼ���ǽ�����ǵ�ɢ���Ű߲���Ѫ��,����ʹ�㵱����Ż,����
�˸е������,����ǰ��Щ����ֵ���Ӱ����Ŀ�ĵ��߶���,���۽���
��͵͵�۲�,�ž�������Щ������֫��ٲ��Ʋ�ȫ��ʳʬ��,��Ȼ����
���������ǻ����Ĺ��ﲻ��Ϊ��,�����Ǳ�������,�����ǿֲ�����
�ݾͿ��������������������,���Ǿ��ٵ͵�ͨ����!!
LONG);
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room39.c",
  "west" : "/open/clan/ou-cloud-club/room/room37",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
