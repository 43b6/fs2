inherit ROOM;
void create() {
	set( "short", "$HIY$$HBRED$������ָ$NOR$�����" );
	set( "object", ([
		"file2"    : "/open/capital/guard/gring",
		"file3"    : "/open/capital/guard/gring",
		"amount3"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/capital/guard/gring",
		"file6"    : "/open/capital/guard/gring",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/capital/guard/gring",
	]) );
	set( "build", 10831 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room39",
	]) );
	set( "long", @LONG
������ָ���ǽ�ָ��ͷ����ȡ�õ�װ����,Ȼ���������������ֵ�����
ȱ��,�ټ��ϵظ��İ��ڴ󲿷ֶ������Ĺ���,ƽ���Ǻ�����������,�������
��ָ�ٶԴ��͵���ս����ʱ��,��Ȼ��һ����Ч��,С�������صؽ�����Ļ�����
ָ���е���������ȡ��,ϣ������ñϿ��Թ黹

LONG);
	setup();
	replace_program(ROOM);
}
