inherit ROOM;
void create() {
	set( "short", "�����������" );
	set( "owner", "raymond" );
	set( "build", 10851 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room303",
	]) );
	set( "long", @LONG

    ������[0;1;36m��[1mN[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1md[1m��[1m��[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ������
���ǳ����һ�뼪��仯����ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
