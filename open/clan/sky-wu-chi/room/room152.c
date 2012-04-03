inherit ROOM;
void create() {
	set( "short", "��ȸ����" );
	set( "owner", "tanger" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"amount6"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/ping/questsfan/obj/diamond_hands",
		"amount7"  : 1,
		"file5"    : "/daemon/class/fighter/armband",
		"amount9"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"amount4"  : 1,
		"file1"    : "/open/dancer/obj/yuaboots",
		"file9"    : "/open/scholar/obj/icefan",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file10"   : "/open/ping/obj/ring-2",
		"amount10" : 1,
		"amount3"  : 1,
		"file2"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount8"  : 1,
		"amount5"  : 1,
		"file6"    : "/open/capital/room/king/obj/km-cloak",
		"amount1"  : 1,
		"amount2"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 12120 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room75.c",
		"north"     : "/open/clan/sky-wu-chi/room/room151",
	]) );
	set( "long", @LONG
���߽���һ����Ϊ[1;37m��[1;31m��ȸ[1;37m��[0m���ȵĵط�����Ÿ��߽�������ʱ������
�������ܵĿ�����Ϊ̫���������һ�ֱ��ѵ�����������ϸ������һ��Ϊ
ʲô�������ӣ��ڿ���һ�����ܶ����û������������ɵģ������뵽��
����������Ϸ�����ȸ֮���ڣ��㿪ʼ���ú��ȣ���Խ�߽�ȥ�㷢���ȶ�
��Խ��Խ�ߣ���������Ҳ���ܲ��ˣ�ͻȻ���㿴����һֻ���˾���ǰ��
���������Լ�����ë������������ʱ������Χ�Ļ����ͻȻ���յĸ���
������������������˵�Ѿ������˲��ô���ĵط��Ƶġ�

LONG);
	setup();
	replace_program(ROOM);
}
