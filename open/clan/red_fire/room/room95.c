inherit ROOM;
void create() {
	set( "short", "$HIC$OS/2$NOR$��$HIY$��$NOR$" );
	set( "owner", "ostwo" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room89",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

������$HIC$OS/2$NOR$��$HIY$С����$NOR$������Կ�������ĳ���ǳ��򵥣�ֻ��һ��С���Ӻ�С����
��С���϶��ż����·�������Ҳ���߰���ģ����ó������������һ�������...
��ϸһ�������ϰ���һ̨$HIW$����$NOR$�����$HIR$����$NOR$�����ڸ¸�����Ĺ����С�
�㲻�������ӭ��ǰȥ������̨$HIR$����$NOR$������Щʲô?
ͻȻ����۾�һ�������ֵ���̨$HIR$����$NOR$��ʹ�õ���ҵϵͳ��Ȼ���Ƕ������ŵ��ε���...
������С�ʾ��ֺ��õ�$HIM$IBM $HIC$OS/2$NOR$ !!!
�����㲻�������������������Ǹ���������Ʒζ������...


LONG);
	setup();
	replace_program(ROOM);
}
