inherit ROOM;
void create() {
	set( "short", "D" );
	set( "exits", ([
		"dancer"    : "/open/clan/sky-wu-chi/room/room116",
		"diana"     : "/open/clan/sky-wu-chi/room/room214",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"doctors"   : "/open/clan/sky-wu-chi/room/room167",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;34mD[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
