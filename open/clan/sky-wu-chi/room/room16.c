// Room : /open/clan/sky-wu-chi/room/room16.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
     ������˺���ķ��䣬���ڰ���ǳ��ļ򵥣�ֻ��СС�ļ������ӣ�
 ����ľ������һ��СС�Ĵ����㲻�ϵĻ������ܣ����������������Ҹ���
 ����ע�⵽��ǽ�ߵ�һ��ʯͷ��������š��������͡���һ�ɵ��͵ĵ���
 �������������䣬�����г�����ɱ�������ƺ���ʱ��������Σ�ա�
. 
LONG);
	set( "short", "��������" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room206",
	]) );
	set( "object", ([
		"amount5"  : 1,
		"file1"    : "/obj/gift/xiandan",
		"file9"    : "/obj/gift/bingtang",
		"amount2"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"amount1"  : 1,
		"file10"   : "/obj/gift/xiandan",
		"amount8"  : 1,
		"file3"    : "/obj/gift/lingzhi",
		"file8"    : "/obj/gift/shenliwan",
		"amount3"  : 1,
		"amount9"  : 1,
		"file2"    : "/obj/gift/xiandan",
		"file4"    : "/obj/gift/hobowdan",
		"file5"    : "/obj/gift/xiandan",
		"file7"    : "/obj/gift/shenliwan",
		"file6"    : "/obj/gift/unknowdan",
	]) );
	set( "owner", "roboo" );
	set( "build", 10078 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
