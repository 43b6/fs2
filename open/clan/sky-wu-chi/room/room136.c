inherit ROOM;
void create() {
	set( "short", "��ƿ���Է�" );
	set( "object", ([
		"file7"    : "/open/killer/obj/knief3",
		"amount6"  : 46330,
		"amount7"  : 46302,
		"file1"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 66411,
		"file8"    : "/open/killer/obj/lustar",
		"amount9"  : 16745,
		"file6"    : "/open/killer/obj/knief2",
		"amount1"  : 1,
		"file5"    : "/open/killer/obj/knife",
		"file9"    : "/open/killer/obj/needle",
		"amount8"  : 74076,
	]) );
	set( "owner", "ywarter" );
	set( "light_up", 1 );
	set( "build", 12000 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room137.c",
		"south"     : "/open/clan/sky-wu-chi/room/room134.c",
		"east"      : "/open/clan/sky-wu-chi/room/room133",
		"north"     : "/open/clan/sky-wu-chi/room/room135.c",
	]) );
	set( "long", @LONG
������������ׯԺ������[1;37m��ƿ��[0m�����ң��������ص���Ȼ��һ��
Ҳû������ӵ�о�����ѧ������ׯԺ�ĵ�����Ӧ���еĻ�������
��һ�Ŵ���ʯԲ����˫��ͨ���⣬�����Ķ���ֵһ�ᡣΨһ�ر����
ǽ�����ҵ�һ��צ�ӣ������е�����һ����צ�ӣ�������ɫȴ����
��ƽ������˸о�����ض���������֮�����У������������԰��
����һ�߽���ʱ��Ȼ���������˵����졣�ƺ�����Ĵ���е�������
в��Ҫ��������������

LONG);
	setup();
	replace_program(ROOM);
}
