inherit ROOM;
void create() {
	set( "short", "ҩ����" );
	set( "owner", "biwem" );
	set( "object", ([
		"file5"    : "/obj/gift/xisuidan",
		"file8"    : "/obj/gift/hobowdan",
		"file7"    : "/obj/gift/xisuidan",
		"file9"    : "/obj/gift/xiandan",
		"amount8"  : 1,
		"file1"    : "/obj/gift/xiandan",
		"file4"    : "/obj/gift/xiandan",
		"file6"    : "/obj/gift/bingtang",
		"amount6"  : 1,
		"amount1"  : 1,
		"file10"   : "/obj/gift/xiandan",
		"file3"    : "/obj/gift/xiandan",
		"amount9"  : 1,
		"amount5"  : 1,
		"file2"    : "/obj/gift/lingzhi",
		"amount4"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
	]) );
	set( "build", 10830 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room175.c",
		"west"      : "/open/clan/sky-wu-chi/room/room351",
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
