// Room : /open/clan/ou-cloud-club/room/room128.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
��ǰ�ĸ�ǽ���в���ȭͷ���С�ĿӶ�,һ·ֱ��,ͨ��
�Ϸ�,���²ȵ�ˮ��,�ǵ���ˮ���ķ�֧,ˮ���������ɶ���
����˳��ˮ�ƶ���,Ӧ�ÿ��Իص���ħ����ڰ�,������һ��
ͨ·���ǰ���ǽ�ϵĿӶ���Ծ�����~~�Ṧ�ɵ����ŵ㰡!!
LONG);
	set( "cmkroom", 1 );
	set( "short", "$HIR$��ħ��$HIW$����ˮ��$NOR$" );
	set( "owner", "bbsboss" );
	set( "object", ([
		"amount2"  : 132,
		"amount6"  : 83,
		"file6"    : "/open/fire-hole/obj/w-pill",
		"amount7"  : 130,
		"amount10" : 135,
		"amount8"  : 159,
		"amount5"  : 145,
		"file2"    : "/open/fire-hole/obj/y-pill",
		"file7"    : "/open/ping/obj/poison_pill",
		"file4"    : "/open/fire-hole/obj/k-pill",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file8"    : "/open/fire-hole/obj/g-pill",
		"file9"    : "/open/fire-hole/obj/p-pill",
		"amount4"  : 22,
		"amount9"  : 37,
		"amount1"  : 181,
		"file10"   : "/open/fire-hole/obj/b-pill",
		"file5"    : "/open/mogi/castle/obj/sspill",
		"amount3"  : 297,
		"file1"    : "/open/fire-hole/obj/r-pill",
	]) );
	set( "light_up", 1 );
	set( "build", 10120 );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/ou-cloud-club/room/room190",
		"west"      : "/open/clan/ou-cloud-club/room/room127.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
