inherit ROOM;
void create() {
	set( "short", "E" );
	set( "exits", ([
		"erme"      : "/open/clan/sky-wu-chi/room/room307",
		"eve"       : "/open/clan/sky-wu-chi/room/room24",
		"eniss"     : "/open/clan/sky-wu-chi/room/room264",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;36mE[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
