inherit ROOM;
void create() {
	set( "short", "$HIR$��Ʒ$HIY$�ղ���$NOR$" );
	set( "owner", "poisonlife" );
	set( "build", 10021 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room76",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

һ�߽����䣬һ��$HIR$��$HIG$��$HIC$��$HIY$��$NOR$��ζ���˱Ƕ������㼱æ��ס���ӣ���Ѱ
$BRED$���$NOR$����Դ���㷢�ַ���֮�������Ÿ���$HIR$����$NOR$���������Ľ������
��һ�������۵�$HIC$С����$NOR$�����ں����ĵ���ʹ�£���������ǰȥ�����
��$HIW$����$NOR$һ��������ŵ�����಻֪��$HIY$ҩ��$NOR$���Լ����ƹ���$HIR$��ҩ$NOR$������
�㲢����ʹ�����֣����Զ�����Բ�û���κ��ô���


LONG);
	setup();
	replace_program(ROOM);
}
