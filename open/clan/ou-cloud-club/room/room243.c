inherit ROOM;
void create() {
	set( "short", "$HIC$��  $HIY$��  $HIB$��$NOR$" );
	set( "object", ([
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/scholar/obj/icefan",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file9"    : "/open/scholar/obj/s_hands",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file10"   : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"amount9"  : 1,
		"amount10" : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10007 );
	set( "owner", "back" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room215",
	]) );
	set( "long", @LONG
Ը˼���ǲ�û��ͷ û���������ڹ�ȥ���Ժ�
��ʹ��������һ���������� ���ܸ�������������
                                                                                
�޺�����ѩ ���ö�Ʋ�� ������������������
�ֲ��弾�� ��������� ��ǰ�����羰ɫ���Ծ���
                                                                                
ץһ��ϸѩ ���������� ��Ը�����±��������
����ӵ������һ���Ǳ� ��Ը��Ҫ˵�ټ� ����ĸ���

LONG);
	setup();
	replace_program(ROOM);
}
