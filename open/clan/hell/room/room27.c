inherit ROOM;
void create() {
	set( "short", "$HIW$��ɫ$HIC$��Ԫ$NOR$֮��" );
	set( "object", ([
		"amount1"  : 69,
		"file1"    : "/open/mogi/dragon/obj/power",
	]) );
	set( "light_up", 1 );
	set( "build", 10104 );
	set( "exits", ([
		"WWW"       : "/open/clan/hell/room/room71",
		"BBB"       : "/open/clan/hell/room/room70",
		"YYY"       : "/open/clan/hell/room/room74",
		"east"      : "/open/clan/hell/room/room23.c",
		"RRR"       : "/open/clan/hell/room/room73",
		"GGG"       : "/open/clan/hell/room/room68",
		"PPP"       : "/open/clan/hell/room/room69.c",
		"SSS"       : "/open/clan/hell/room/room72.c",
	]) );
	set( "long", @LONG
�ഫ������˵�е���ɫ����,���Եõ������������Ӵ�������ľ�Ԫ,Ϊ������
�����ս��,�����Ὣ�ռ����ľ�Ԫ����ڴ˴�,�����������г�����ʱ��,��������
���ڵ�����,���Դ˴�������Ҳ���൱���ܵ�,���Ǳ��������������������������
��Ԫ,�ؽ��⵽ȫ�ظ���׷ɱ

LONG);
	setup();
	replace_program(ROOM);
}
