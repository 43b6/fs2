inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "object", ([
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/ping/obj/gold_hand",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/snow/obj/figring",
		"file5"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/open/scholar/obj/icefan",
		"file9"    : "/open/gsword/obj/yuskirt",
		"file2"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "owner", "fighter" );
	set( "item_desc", ([
		"��ɱ��" : @ITEM
[22m����ǰһ�ڣ�����ʲô����֪����....[0m
������
[31m�������[0m-
          ���Ѿ��������������ڡ���Ȼ����ظ�����һ�ξ��룬�������Ѿ�
���ܵ�����̹ǵ����硣����һƬ����������ȴ��Ӱ������������ߵ�ҹ
�ܻ������ֵģ�Ӧ�ò���û�顣�ϱߺ���������Ǻ���������ͨ�Ĺܵ���
����������һ�����ε�����������������ͬ�����磬����Ҫ������������
��ȥ������ô�������xC
    ����Ψһ�ĳ����� north��
ITEM,
		"stone" : @ITEM

һ���޴��ʯͷ������������һ�����ص���ӡ�����沢�����ĸ�
����Ĵ��� 
               [22m��  [5m[21m��  ��  [0m[23m��  [5m[24m��  ȭ  [0m[22m��[0m 
ITEM,
	]) );
	set( "build", 10959 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room276",
		"north"     : "/open/clan/13_luck/room/room100.c",
	]) );
	set( "long", @LONG

[33m    [0m�Ĵ��յ���һ�߽������£���ֻ�����Լ��ĽŲ����ص���ɽ��֮
�в����ڶ�����ϸ�������ƺ����������д���΢��������ߺ��������
�۰������������˷�������֮������ʧ�����õ�[0;1;31m��[1mi[1;36m��[1mi[1m��[1m��[1;33m��[1m��[1m��[1m��[1;31m��[1mj[0mֻ����
����ɢ��ǧ���ɵĽ�⣬һʱ�����ھ�������գ�˲����ʧ���٣���
��֮��ͻȻһ�������ɽ���·���������ǰ����ǰ����
[33m            [0;1;31m��[1mi[1;36m��[1mi[1m��[1m��[1;33m��[1m��[1m��[1m��[1;31m��[1mj[0mΨһ���ˣ�[0;1;31m��[1m��[1m��[1m��[1m��[1ms[0m
$HIY$[33mֻ��������[0;1;5;33m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5ms[1;5m��[1;5m��[0m$HIY$[33m����������âΧ������Ϊ֮�����˰�����̾��[0m

LONG);
	setup();
	replace_program(ROOM);
}
