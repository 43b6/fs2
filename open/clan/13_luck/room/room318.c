inherit ROOM;
void create() {
	set( "short", "���������" );
	set( "owner", "yaoblade" );
	set( "object", ([
		"file4"    : "/open/gsword/obj/ring-1",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/gsword/obj/ring-1",
		"file9"    : "/open/love/obj/cloth1",
		"file6"    : "/open/love/obj/cloth1",
		"file7"    : "/open/port/obj/wolf_ring",
		"file1"    : "/open/love/obj/cloth1",
		"file5"    : "/open/port/obj/wolf_ring",
		"amount4"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/gsword/obj/ring-1",
		"amount7"  : 1,
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room306",
	]) );
	set( "long", @LONG

    ������[0;1;33m��[1mN[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1md[1m��[1mv[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ������
�����������㣬�����������֦��ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
