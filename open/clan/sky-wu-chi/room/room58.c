inherit ROOM;
void create() {
	set( "short", "J" );
	set( "exits", ([
		"jean"      : "/open/clan/sky-wu-chi/room/room27",
		"jsc"       : "/open/clan/sky-wu-chi/room/room148",
		"jsa"       : "/open/clan/sky-wu-chi/room/room200",
		"out"       : "/open/clan/sky-wu-chi/room/room17",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;36mJ[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
