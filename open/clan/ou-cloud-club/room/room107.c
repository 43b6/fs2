// Room : /open/clan/ou-cloud-club/room/room107.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "build", 11433 );
	set( "cmkroom", 1 );
	set( "long", @LONG
һ���������Ļ�԰���Ĵ������������ߴ��ʯ��        
ԭ���˴��ǰ׼������ۻʵ����꣬��ÿһ��ʯ�񣬽�������    
��������������ǰ��[0;1;37m��[1m��[1m��[1m��[1m��[1mO[1m��[1mq[0m�Լ�[0;1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0mǿ�������ģ���    
�Բ��ܱ���ǧ��֮�ã���˵��[0;1;33m7[1m4[1m3[0m����������-��[0;1;32m��[1mB[1m��[1mK[0m������    
�������޵е�[0;1;30m��[1m��[1m��[1mt[1m��[1m��[1m��[1m��[1m��[1mD[0m�Լ�[0;1;36m��[1m��[1m��[1mZ[1m��[1m��[1m��[1mD[0m�Ⱦ�����ѧ�������    
��������������ų�ת����[0;1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m��������δ����ȫ����    
[0;1;37m��[1m��[1m��[1m��[1m��[1mO[1m��[1mq[0m������ǿ���ɣ�����������ͷ�����治��������    
��ǰչʾ��Щ��˵�е���ѧ��

LONG);
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/ou-cloud-club/room/room14.c",
		"west"      : "/open/clan/ou-cloud-club/room/room32",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "short", "ĥ����" );
	set( "object", ([
		"amount8"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/gsword/obj/yuskirt",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/daemon/class/fighter/armband",
		"amount1"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/scholar/obj/s_hands",
		"amount5"  : 1,
	]) );
	set( "owner", "moblade" );
	set( "light_up", 1 );
	setup();

	}
