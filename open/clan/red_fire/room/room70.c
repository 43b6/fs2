inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIY$����$HIC$��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room74",
		"leave"     : "/open/clan/red_fire/room/room61.c",
	]) );
	set( "build", 11015 );
	set( "long", @LONG
һ�ߵ�����....������....$HIM$�󷹵�$NOR$Ү�������˺þõķ������������
������$HIR$��õ$NOR$��������δ�����µ�$HIR$��$HIG$��$HIY$��$HIB$��$NOR$��ɵĸ߼�סլ�����������ʱ
��Ϣ�ĺõط���������˵����ķ�����Ȼ�ܶ࣬���ǽ�����˵���ˣ�$HIC$�Լ�
Ҫס�ķ���Ҫ�Լ�����$NOR$....������з����ǲ��е�ร���


LONG);
	setup();
	replace_program(ROOM);
}
