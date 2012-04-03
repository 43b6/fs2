inherit ROOM;
void create() {
	set( "short", "��С�����������" );
	set( "owner", "microsoft" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 11327 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room8",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��������С����ÿ��ܶ���Ψһ���Ժú���Ϣ�ĵط�����Ȼ����ĳ���򵥣�
���Ǹ��еĶ���һ��Ҳ���١����������ɳ���͸߼��������豸�������Ű���-С��
�Ĵ����Ƭ����ǽ�ϣ���Ϊ�����Ǳ���С����ȥ��һЩ���ѶȵĹ������ֲ�����
�Ӱ�ѣ����Ե���æ����������С������ƬPKһСʱ���������Ψһ������
��һ�뵽����㲻������С�����ҵ������е�ʮ�ֵ�ͬ���ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
