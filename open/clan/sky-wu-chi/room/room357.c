inherit ROOM;
void create() {
	set( "short", "ҩ������" );
	set( "owner", "biwem" );
	set( "object", ([
		"file2"    : "/obj/gift/xiandan",
		"amount5"  : 1,
		"file5"    : "/obj/gift/lingzhi",
		"amount2"  : 1,
		"amount8"  : 1,
		"file1"    : "/obj/gift/shenliwan",
		"file7"    : "/obj/gift/lingzhi",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/obj/gift/lingzhi",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/obj/gift/unknowdan",
		"file3"    : "/obj/gift/hobowdan",
		"file9"    : "/obj/gift/xiandan",
		"amount9"  : 1,
		"file10"   : "/obj/gift/xisuidan",
		"amount4"  : 1,
		"file8"    : "/obj/gift/lingzhi",
		"amount1"  : 1,
	]) );
	set( "build", 10324 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room176",
	]) );
	set( "long", @LONG
���ǻ�����һ�Ũ�ҩ����,ר���ռ�һЩ�鵤��ҩ,
���ܼҾ����������֥,����ʹ�˱�������ɵ�,
��С�������ɺɰ���,���������Ԩ��ɵ�.
��������ب��ǿ׳���ɵ�.......�ȵ�
��ϣ��������ʿ��ʩ��һЩҩ������
��Ϊ��ʮ�ֵ��һ���Ӷ�û�񵽹�@@
LONG);
	setup();
	replace_program(ROOM);
}
