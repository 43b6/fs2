inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"file10"   : "/open/killer/obj/kill_yar_head",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/prayer/obj/boris-boots",
		"file5"    : "/open/killer/weapon/k_head3",
		"file1"    : "/open/killer/weapon/k_torch",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"file2"    : "/open/gsword/obj/no_tax",
		"amount5"  : 1,
		"file7"    : "/open/killer/obj/kill_yar_head",
		"amount2"  : 1,
		"file8"    : "/open/killer/obj/kill_yar_head",
		"file4"    : "/open/dancer/obj/yuawaist",
	]) );
	set( "build", 10405 );
	set( "light_up", 1 );
	set( "owner", "dico" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room181",
	]) );
	set( "long", @LONG
������ǡ�[57m�����ܶ�[0m���Ͽ˵��Է��ˣ�
������ȥ�ƺ�û��̫��Ķ������������
����Ϊ�Ͽ˸հ����Ĺ�ϵ�ɡ����ǣ��㻹��
������ǽ�Ͽ����Ͽ˵�ս��Ʒ��������ɽ��
���ŵ�[53m����������[0m����կկ����[52m����ͷ��[0m��
[52m��������[0m����[56mС��а[0m���������ϵ����˲ݻ�
������������[53m������[0m����Щ���ǵϿ˵�
ս��Ʒร���
LONG);
	setup();
	replace_program(ROOM);
}
