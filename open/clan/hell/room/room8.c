inherit ROOM;
void create() {
	set( "short", "$HIM$����$RED$����$NOR$" );
	set( "build", 60 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/hall.c",
		"down"      : "/open/clan/hell/room/room9.c",
		"west"      : "/open/clan/hell/room/room19.c",
		"east"      : "/open/clan/hell/room/room20",
	]) );
	set( "long", @LONG
    ������$MAG$����$HIR$����$NOR$������Կ�������������ƹ���-��С����վ�����
����ר�ĵĿ��ŵ���������ܷ���С���ǣ���ǻ�¶��һ˿а���΢Ц��
�����������˵����ľ�!!!!!ͻȻ��ת��ͷ�������Ц�������㲻������һ����!!!
����ֱ���� : ���ǿ���뿪�����ط����ˣ���Ȼ��һ����С����ľ�������

   ��С�����ʬ��(Corpse)
LONG);
	setup();
	replace_program(ROOM);
}
