inherit ROOM;
void create() {
	set( "short", "W" );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room17",
		"wanwan"    : "/open/clan/sky-wu-chi/room/room242",
		"want"      : "/open/clan/sky-wu-chi/room/room248",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;31mW[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
