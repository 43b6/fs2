inherit ROOM;
void create() {
	set( "short", "M" );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"mudu"      : "/open/clan/sky-wu-chi/room/room221.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;30mM[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
