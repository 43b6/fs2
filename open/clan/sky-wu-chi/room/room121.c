inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "biwem" );
	set( "object", ([
		"file4"    : "/open/killer/obj/black",
		"amount3"  : 1,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file1"    : "/open/killer/obj/bellstar",
		"amount4"  : 15,
		"amount2"  : 1,
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 2296,
	]) );
	set( "light_up", 1 );
	set( "build", 10051 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room210",
	]) );
	set( "long", @LONG
�������ŵ����Ǻ����䱦�����������������߾������ڣ����⽣Ӱ��ɢ���䣬
�䲻�������轣����������������ɢ�����İ������������м��������������
���������е��������߷ɣ����м�������Ǻ��żı���������������ɢ������
���ױȵİ�����ʹ���˲������׽���˷��䡣
LONG);
	setup();
	replace_program(ROOM);
}
