inherit ROOM;
void create() {
	set( "short", "ħ�����ղظ�" );
	set( "owner", "biwem" );
	set( "object", ([
		"file3"    : "/obj/gift/lingzhi",
		"file1"    : "/obj/gift/lingzhi",
		"amount1"  : 1,
		"file6"    : "/obj/gift/shenliwan",
		"amount6"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"file2"    : "/obj/gift/bingtang",
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/obj/gift/xiandan",
		"amount9"  : 1,
		"amount8"  : 1,
		"file8"    : "/obj/gift/hobowdan",
		"file10"   : "/obj/gift/bingtang",
		"file9"    : "/obj/gift/unknowdan",
		"amount5"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10050 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room281.c",
	]) );
	set( "long", @LONG
�����ǻ�����һ���ռ�ħ����ķ���
�����ս��Ʒ���ǻ�����һ�ŵ���ƭ����
�����������Լ��е���������
����Ȼ���س��˲��¹�ͷ�� �λ���� ��ƭ����
��ʱ�����Լ���������Լ��������ͺ���
������������
���ڼƻ������ �λ���� ��ƭ������ɺö���
LONG);
	setup();
	replace_program(ROOM);
}
