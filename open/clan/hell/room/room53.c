inherit ROOM;
void create() {
	set( "short", "$HIW$�����Է� - $HIC$����$NOR$" );
	set( "object", ([
		"file8"    : "/open/fire-hole/obj/p-pill",
		"amount8"  : 3,
		"file3"    : "/open/fire-hole/obj/g-pill",
		"amount3"  : 20,
	]) );
	set( "build", 10073 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room40",
		"north"     : "/open/clan/hell/room/room40",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
������Ǻ������ҵ������ˣ���ǰ��λ���Ǵ�˵
˵�еĽ�ħ��  �����ڱ�Ŀ���񣮼�ʹ������ϻ���
�������˵�ɱ��֮�����㲻�ɵ��˺��˼��������¾�
������λ  [0;1;32m��[1mC[1;34m [1m��[1m��[1m [1m��[1m��[1m [1;31m��[1m][0m [0;1m��[1mE[0m [0;1m��[1m��[1m [1m��[1m��[0m

([0;1;31m��[1m��[1m��[1mN[1;36m��[1mg[1m��[1m��[0m)[0;1;31m��[1mC[1m��[1m][0m��[0;1m��[1m��[1;31m��[1m��[1;37m��[1mC[0m������(Jinkazama)

LONG);
	setup();
	replace_program(ROOM);
}
