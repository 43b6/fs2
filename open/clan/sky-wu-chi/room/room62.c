inherit ROOM;
void create() {
	set( "short", "X" );
	set( "exits", ([
		"xraistlin" : "/open/clan/sky-wu-chi/room/room240",
		"out"       : "/open/clan/sky-wu-chi/room/room17",
		"xman"      : "/open/clan/sky-wu-chi/room/room232",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;36mX[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
