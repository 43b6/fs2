inherit ROOM;
void create() {
	set( "short", "ɳĮ" );
	set( "object", ([
		"amount6"  : 1,
		"amount8"  : 1,
		"file4"    : "/obj/gift/hobowdan",
		"amount4"  : 1,
		"file10"   : "/obj/gift/xisuidan",
		"amount10" : 1,
		"file1"    : "/obj/gift/lingzhi",
		"amount1"  : 1,
		"file2"    : "/obj/gift/lingzhi",
		"file5"    : "/obj/gift/hobowdan",
		"file9"    : "/obj/gift/lingzhi",
		"amount2"  : 1,
		"file7"    : "/obj/gift/bingtang",
		"file6"    : "/obj/gift/xiandan",
		"amount7"  : 1,
		"file8"    : "/obj/gift/unknowdan",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "owner", "dancer" );
	set( "build", 12166 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room54",
	]) );
	set( "long", @LONG
���ڲ�֪�������ߵ�����Ƭ���޵�[0;1;32m��[1mF[1m��[1mz[0m���Ѳ�֪��
���ںη���������ȥһƬ[0;1;32m��[1mF[1m��[1ma[0m������������㲻֪��
���δ���ȥ����ʱ��������Դ�����һ��[0;1;33m��[1mg[1m��[1m��[0m��������
��ʾ��̤���˲���̤���[0;1;36m��[1m��[1m��[1m��[0m����������������ſ��
��Ѱ�����������Դͷ����ʱ�㷢���ڿ������һ��
[0;1;31m��[1m��[1m��[1mH[0m���������������[36mδ֪��[0mǰ����
LONG);
	setup();
	replace_program(ROOM);
}
