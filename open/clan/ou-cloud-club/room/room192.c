inherit ROOM;
void create() {
	set( "short", "���صش�" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"file4"    : "/open/love/obj/shield",
	]) );
	set( "owner", "assassin" );
	set( "item_desc", ([
		"����" : @ITEM
test
ITEM,
	]) );
	set( "build", 12795 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room184",
	]) );
	set( "long", @LONG
����������е�Ī��������, ��˵�����������ص�������������ؾ��ǲ����ڴ�,
���������ܹ��˽����ľ����뱳��, ������Ҳ�Ƕ���������ص��������Ȥ����������
���ܺڰ�ȴ���ϳ��ֵ��߲ʹ�â, ���ǰѴ������ص�ɫ�ʼ���, ����������̽��������
��һȥ����, �������߾�����ó�Ϊ��һ��ʧ���˿�
LONG);
	setup();
	replace_program(ROOM);
}
