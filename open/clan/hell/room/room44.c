inherit ROOM;
void create() {
	set( "short", "$HIC$kalin$HIW$��$HIG$��˿ͷ3$NOR$" );
	set( "owner", "taxi" );
	set( "build", 10177 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room4.c",
		"east"      : "/open/clan/hell/room/room63.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

���ڸ������������kalin֮ǰ���۷�,
һֱ�Ķ�kalin����....kalin˼�������...
��...
��.......
��...........
��...............
z.....zz......zzzzz.....ZZZZZZ

kalin���ھ���������!!
���ܹ��Ľ�����... kalin����������һ��������е�С��������,
���С����ƽ���Կ��Ƴ̳�ά��........
��ֻҪ��һ�о�����а�����������..�к���С....
���ͻ������ҵ绰ͤ...����Ϊ���͵�սʿ...


�������૵�..��ħ!���Ҵ����������ͷ����!!
LONG);
	setup();
	replace_program(ROOM);
}
