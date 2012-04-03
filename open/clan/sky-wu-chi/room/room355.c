inherit ROOM;
void create() {
	set( "short", "�ؾ���" );
	set( "owner", "biwem" );
	set( "object", ([
		"file3"    : "/open/gblade/obj/blade-book",
		"file1"    : "/open/gsword/obj/sword_book",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/ping/obj/sunforce_book",
		"amount5"  : 1,
		"file2"    : "/open/marksman/obj/book",
		"file9"    : "/open/doctor/obj/curebook",
		"file5"    : "/open/snow/obj/book",
		"file7"    : "/open/capital/obj/stabber_book",
		"file4"    : "/open/gblade/obj/book",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/poison/obj/pbasebook",
		"amount7"  : 1,
	]) );
	set( "build", 15777 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room278.c",
		"west"      : "/open/clan/sky-wu-chi/room/room356",
	]) );
	set( "long", @LONG
���Ǻ�ѧ����Ļ�����һ����ϲ�����ĵط�
�������˽���Ҫ����ͷ�ؾͱ���ú�Ŭ������
�������ϧ�ؽ�,����Σ�յ���ȥ�ռ�����Ϊ�м�ֵ����
�������ڲ�ͬ���۹�
���˷�����ʱ���ﻹ��������
�����������˲�мһ�����鼮
��ʱ��ͻȻ���û�����һ�ŵ�ǰ;�����޹�
LONG);
	setup();
	replace_program(ROOM);
}
