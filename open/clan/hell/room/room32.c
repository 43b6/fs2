inherit ROOM;
void create() {
	set( "short", "$HIB$����$NOR$" );
	set( "light_up", 1 );
	set( "build", 10072 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "long", @LONG
һ�������۵��������������ʮ�ѽ�������ĵ�,��ϸ������ȫ���Ǹ�������
�������õı�����,����������ǰ�����Գ���������,Ҳȫ�����������ռ����˴�
�뵽�ظ���ʦ��ɲ��ʵ��,�ܹ��õ���Щ����,�㲻����������,�˵�Ҳ����ʱ
��͸����������֮��

LONG);
	setup();
	replace_program(ROOM);
}
