inherit ROOM;
void create() {
	set( "short", "�����������" );
	set( "owner", "vickey" );
	set( "object", ([
		"amount3"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/ping/obj/ring-2",
		"file1"    : "/open/fire-hole/obj/p-pill",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount1"  : 32,
		"file2"    : "/open/wu/npc/obj/armband",
		"file9"    : "/open/poison/obj/feather",
		"file8"    : "/open/capital/guard/gring",
		"file5"    : "/open/dancer/obj/yuawaist",
	]) );
	set( "build", 10074 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room298",
	]) );
	set( "long", @LONG

    ������[0;1;33m��[1mN[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1md[1m��[1mA[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ������
ȫƾ�����������߶��������ģ�ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
