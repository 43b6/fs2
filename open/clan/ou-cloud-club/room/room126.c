// Room : /open/clan/ou-cloud-club/room/room126.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
ͨ������ɽׯ�ڵĵ�·������·�Բ����Ÿ�����
�Ÿ��ɵľ��ر��������Ƹ�ڰ���ɽׯ����ʦ����
�ǣ�ׯǰ����������䣬�ⲻ֪����ɽׯ�����֡���
�е�һ����ͨ�˵�������ɽ���ׯ�ڣ���ׯ����
ǰ���ŷǳ������Ĺؿ������ţ�����

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����ɽׯ" );
	set( "light_up", 1 );
	set( "short", "ɽׯ���" );
	set( "object", ([
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount3"  : 1,
		"file6"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file5"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file1"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount5"  : 1,
		"file7"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount1"  : 1,
		"file4"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 16444 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"out"       : "/open/clan/ou-cloud-club/room/room124.c",
		"north"     : "/open/clan/ou-cloud-club/room/hall",
]) );
	setup();

	}
