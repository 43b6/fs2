inherit ROOM;
void create() {
	set( "short", "$HIC$��Ԫ��϶$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/capital/obj/blade2",
		"file2"    : "/open/capital/obj/blade2",
	]) );
	set( "light_up", 1 );
	set( "build", 13307 );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/hall.c",
		"north"     : "/open/clan/ou-cloud-club/room/room163",
	]) );
	set( "long", @LONG

    һ̤��˵�,��е��ռ���Ȼ�ߵ�����,ʱ�侹�ƺ�ˮ�㳱����,ά��
����Ķ��ɷ·���ɲ�Ǽ�ʧȥ��һ������,�ǳ�ϡϡ������ںڰ����к�
������,���Ӧ�þ�������ı�Ե�˰�,���������Ĵ��ڻ��е�һ˿��η,
��ô��øϿ��ͷ�뿪�˵ذ�,�ô��������ɲ���ʲô��Ȥ����.

LONG);
	setup();
	replace_program(ROOM);
}
