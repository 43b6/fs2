inherit ROOM;
void create() {
	set( "short", "��˪��-����֮��" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
	]) );
	set( "light_up", 1 );
	set( "owner", "roboo" );
	set( "build", 10717 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room358",
	]) );
	set( "long", @LONG
���������ƿ�����ʱ����˲�䴦��һƬ��ڵĻ����У����ֲ�����ָ
���������������������۾��������������ĸ����ⷿ�����������
�о��������أ���������һ��Ī���ĸо�����Χ�����������㽫�۾�
�ſ���ʱ���㿴���Ĳ�����һƬ����ڣ�ȡ����֮���Ǳ�һ��Ƭ��
������Χ�Ŀռ䡣����Ƭ�ռ��������Ʈ����10ֻ��ɫ��ȫ��ͬ����
ˮ�����㿴���������񣬱��˽�ԭ����ʮֻ����ˮ��һ������������
ʧ���ѾõĻ����ķ��������и������Զ������ֵ���ѧ��ʽ��

���������������̡�õ��ϼ�������ء���ѩ�������Ǻӡ�

���������������硡��׺������ء�Ѫ�ԡ�������
LONG);
	setup();
	replace_program(ROOM);
}
