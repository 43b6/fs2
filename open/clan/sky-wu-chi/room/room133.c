inherit ROOM;
void create() {
	set( "short", "���غ�԰" );
	set( "owner", "ywarter" );
	set( "object", ([
		"amount3"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/killer/obj/k_ring",
		"file3"    : "/open/ping/questsfan/obj/diamond_skirt",
		"file2"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount5"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/ping/questsfan/obj/diamond_legging",
		"file6"    : "/open/magic-manor/obj/water-ball",
		"file1"    : "/open/ping/questsfan/obj/diamond_cloak",
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 12000 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room136",
	]) );
	set( "long", @LONG
���������������ĺ�԰��Ҳ�ǿ�ƿ�Ӻ����ļ�λ����һ���ͻ����羰
�ĵط�������Ļ�����һЩ������ݣ�����������һ��[1;37m��[1;35mƼ������[1;37m��[0m������
�󣬶�������벻������������Ĺ��á�����һ��ԭ����֪�������ԭ����
���ǳ�ʱ�ڵ�����������֮���ã�����ȥ֮�����е��������������ж��
�Զ�����ʮ���ֻ꣬����Ҳֻ�ܿ������ܳԡ���Ϊ����͵ժ����֮ʱ���
����ƿ�ӵ���������ɱ������ɱ�ˡ�����Ҳֻ�ܿ�������ķ羰�������
԰����Ǻܴ����Ź��Ĳ�ƺ����ȺȺ��������۾�һ���Ǵ�ͷ�����
ԭ�������������Կ�������ͷӢ�˵����ӣ��㿪ʼ����Ҳֻ�������ӵĺ���
�������������ӵ����ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
