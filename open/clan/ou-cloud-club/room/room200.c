inherit ROOM;
void create() {
	set( "short", "$HIB$��$HIC$ɽ$NOR$" );
	set( "object", ([
		"file2"    : "/daemon/class/fighter/figring",
		"amount1"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/prayer/obj/kylin-belt",
		"file1"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "breeze" );
	set( "build", 10114 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room227",
		"west"      : "/open/clan/ou-cloud-club/room/room197",
	]) );
	set( "long", @LONG
$HIC$�������������������������������ҡ��ء��G���̡������С�

$HIC$������������������������������������  �����ˡ�����������

$HIC$�����������������������������������ޡ��졡һ���ա��塡ҹ

$HIC$                                  �ġ��ʡ����������桡��

$HIC$�����������������������������������ơ��¡�ɽ������ȼ����

�����������������������������������ࡡ�С�ˮ������������

$HIC$�����������������������������������������̡��ˡ�����

$HIW$��������������������������������������������������������
LONG);
	setup();
	replace_program(ROOM);
}
