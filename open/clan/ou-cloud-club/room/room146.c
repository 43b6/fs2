inherit ROOM;
void create() {
	set( "short", "ʮ��$HIR$��$NOR$��" );
	set( "object", ([
		"amount9"  : 1,
		"file10"   : "/obj/gift/lingzhi",
		"amount3"  : 1,
		"file9"    : "/obj/gift/shenliwan",
		"file6"    : "/obj/gift/bingtang",
		"amount7"  : 1,
		"file4"    : "/obj/gift/xiandan",
		"file1"    : "/obj/gift/xisuidan",
		"file2"    : "/obj/gift/hobowdan",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file7"    : "/obj/gift/unknowdan",
		"amount4"  : 1,
		"file8"    : "/obj/gift/xiandan",
		"file3"    : "/obj/gift/shenliwan",
		"amount1"  : 1,
		"file5"    : "/open/gsword/obj1/sadsword",
	]) );
	set( "owner", "enter" );
	set( "build", 11054 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room145",
	]) );
	set( "long", @LONG

����������������������������������������������������������
��  һ��   ��������   ����   ���ձ���   ����   ���˲�Ϣ ��
��  �ĺ�   ��̬����   ���   ��̨��¶   ����   ��Ҷ�ཹ ��
��  �ߺ�   ��������   �˺�   �ܻ�����   �ź�   ��ҹ���� ��
��  ʮ��   ޵�ܲ��   ʮһ�� δʳ�ܹ�   ʮ���� �����޵� ��
����������������������������������������������������������

                    ���롣����ʮ����

LONG);
	setup();
	replace_program(ROOM);
}
