inherit ROOM;
void create() {
	set( "short", "��Ĺ���" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/open/gsword/obj/no_tax",
		"amount2"  : 1,
		"file2"    : "/open/dancer/obj/yuaboots",
		"amount1"  : 1,
		"file1"    : "/open/killer/weapon/k_torch",
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"amount4"  : 1,
	]) );
	set( "owner", "windson" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room172",
	]) );
	set( "long", @LONG

΢������Ĵ�����, ����е��ޱȵ��泩, �������Ǵ�˵�е�

$HIC$                 �X�j�T�T�T�T�T�j�a
                   �U�X�T�j�T�a�U
                   �U�X�T�p�T�[�U
                   �U�U  �U  �U�U
                   �U�^�T�p�T�a�U
                 �^�a�T�T�m�T�g�^�a$NOR$

                                         -=��Ĺ���=-

LONG);
	setup();
	replace_program(ROOM);
}
