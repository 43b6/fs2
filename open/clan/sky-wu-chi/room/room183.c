inherit ROOM;
void create() {
	set( "short", "��ͤ��" );
	set( "object", ([
		"amount6"  : 1,
		"file3"    : "/open/gblade/obj/sa-head",
		"file2"    : "/open/gblade/obj/sa-head",
		"amount1"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/mogi/castle/obj/fire_book",
		"amount2"  : 1,
	]) );
	set( "build", 10002 );
	set( "owner", "jsa" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room195",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
һ�߽����ڣ��㾹Ȼ�ֱ治�����䣬ԭ���������
�������ľ�壬�����ưٸ������꺮���ѣ���ɽˮ����
������ë���ܣ��򼯽����򲩹ţ����ֻ�������������
��̣��������Ƕ��ġ�һ��һ���������飬���趦��
���ñ��⡣���ʽ������Բ���򷽣���������ڡ���
��ǽ���������Ŷ�����֮����ɵĲ��ӣ����٣�������
ƿ֮�࣬�����ڱڣ�ȴ�������ƽ�ġ�
LONG);
	setup();
	replace_program(ROOM);
}
