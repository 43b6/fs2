// Room : /open/clan/ou-cloud-club/room/room5.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/ou-cloud-club/room/room11",
		"west"      : "/open/clan/ou-cloud-club/room/room122.c",
]) );
	set( "long", @LONG


���¼�ʱ��  �Ѿ�������  ��֪���Ϲ���  ��Ϧ�Ǻ���

�����˷��ȥ  Ω����¥����

�ߴ���ʤ��  ����Ū��Ӱ  �������˼�

ת���  ��粻�  ������

��Ӧ�к�  ���³����ʱԲ

���б������  ��������Բȱ

���¹���ȫ  ��Ը�˳���  ǧ�ﹲ濾�

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "light_up", 1 );
	set( "short", "ˮ����ͷ--����" );
	set( "owner", "abcabc" );
	set( "build", 10304 );
	set( "object", ([
		"file3"    : "/daemon/class/blademan/obj/skykey",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount1"  : 65,
		"file7"    : "/open/gblade/obj/dragon_book",
		"file2"    : "/open/fire-hole/obj/r-pill",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"amount2"  : 326,
		"file9"    : "/daemon/class/fighter/armband",
		"amount4"  : 2,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"file4"    : "/open/fire-hole/obj/w-pill",
		"file8"    : "/open/gblade/obj/dragon_book",
		"amount6"  : 1,
		"amount8"  : 1,
	]) );
	setup();

	}
