inherit ROOM;
void create() {
	set( "short", "$HIG$ɱ��ħ��$NOR$�����" );
	set( "object", ([
		"amount10" : 1,
		"file8"    : "/open/killer/obj/k_ring",
		"file10"   : "/open/killer/obj/k_ring",
		"amount1"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"amount8"  : 1,
		"file4"    : "/open/killer/obj/k_ring",
		"file7"    : "/open/killer/obj/k_ring",
		"amount2"  : 1,
		"file9"    : "/open/killer/obj/k_ring",
		"file2"    : "/open/killer/obj/k_ring",
		"file6"    : "/open/killer/obj/k_ring",
		"amount7"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/killer/obj/k_ring",
	]) );
	set( "build", 10467 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room39",
	]) );
	set( "long", @LONG
ɱ��ħ�����ഫ������ɽ�ɽ��صĿ�ʯ��������ħˮ�����Ƴ�,ƽʱ�Ǻ�������ɱ��
���Գ�����ɱ������,һ������Ҫ�õ�������ս��������ϯ���������,��Ҫð�ű�׷ɱ
��Σ��,С�������ص��������е�ɱ���ռ�һЩ��ָ,�ղ���������Ϊ����

LONG);
	setup();
	replace_program(ROOM);
}
