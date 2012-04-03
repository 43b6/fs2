inherit ROOM;
void create() {
	set( "short", "�����˴�ʿ--�Ÿ�" );
	set( "owner", "andyabc" );
	set( "light_up", 1 );
	set( "object", ([
		"file3"    : "/open/fire-hole/obj/b-pill",
		"file6"    : "/open/fire-hole/obj/y-pill",
		"amount1"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/fire-hole/obj/k-pill",
		"file2"    : "/open/fire-hole/obj/p-pill",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 10,
		"amount9"  : 1,
		"amount3"  : 34,
		"amount2"  : 15,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/gblade/obj/sa-head",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file8"    : "/open/ping/obj/poison_pill",
		"amount10" : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 20,
		"amount8"  : 17,
	]) );
	set( "build", 10215 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room234",
		"west"      : "/open/clan/ou-cloud-club/room/room5.c",
	]) );
	set( "long", @LONG


���������  ���������  ��Ϧ�Ǻ�Ϧ  ���˵����

��׳�ܼ�ʱ  �޷����Ѳ�  �þɰ�Ϊ��  �������г�

��֪��ʮ��  ���Ͼ�����  �����δ��  ��Ů������

��Ȼ����ִ  �������η�  �ʴ�δ����  ��Ů�޾ƽ�

ҹ�������  �´������  ���ƻ�����  һ����ʮ��

ʮ���಻��  ���ӹ��ⳤ  ���ո�ɽ��  ������ãã

LONG);
	setup();
	replace_program(ROOM);
}
