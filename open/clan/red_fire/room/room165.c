inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIR$VIP $HIY$����$HIC$��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room166",
	]) );
	set( "long", @LONG
������ר�������Ӵ�$BRED$����$HBCYN$���$NOR$�ĽӴ��������������װ�꼰ҫ�۵�װ
�Σ�������κ�һ��$HIM$����$NOR$��$HIY$��$HIG$ͳ$HIR$��$HIC$��$NOR$��������$HIY$����$NOR$����ĵ�������������
������$WHT$����$NOR$�����еİ���ȫ���Ƿ��˺ܴ����˼���������ĳɹ���Ϊ��ֻ
�������������������$HBCYN$���$NOR$���Ը��ܵ������������ٴ�������˵ÿ��$HIY$��
��$NOR$������ʦ��Ƶģ�Ϊ���´��ŵ�$HBCYN$���$NOR$�ǣ���������Ҳֻ��$HIR$����$NOR$������$HIC$��
��$NOR$�ſ��Խ�ȥ��


LONG);
	setup();
	replace_program(ROOM);
}
