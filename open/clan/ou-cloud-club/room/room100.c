// Room : /open/clan/ou-cloud-club/room/room100.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIW$��ħ��$HIR$����ˮ��$NOR$" );
	set( "object", ([
		"amount7"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"amount8"  : 1,
		"file2"    : "/open/prayer/obj/boris-cloth",
		"file10"   : "/open/prayer/obj/boris-cloth",
		"amount9"  : 1,
		"file1"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"file3"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"file8"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/prayer/obj/boris-cloth",
		"amount10" : 1,
	]) );
	set( "build", 10028 );
	set( "light_up", 1 );
	set( "long", @LONG
�����м���ͻ��ĵ���������ˮ��,����������Щ�ط�Ҳ��
ǰ��,�����߰�,���ڜ�ȵĹ�ϵ,�����Ͽ��ǳ�������̦��.��
С�ĵ㲻Ҫ����ȥ����,��˵��ħ�Ǵ���������ˮ���·�����
�Ĺ���,������ȥ��ı��������ǿɾͲ������~~~

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"east"      : "/open/clan/ou-cloud-club/room/room103.c",
		"west"      : "/open/clan/ou-cloud-club/room/room99.c",
]) );
	set( "no_transmit", 1 );
	setup();

	}
