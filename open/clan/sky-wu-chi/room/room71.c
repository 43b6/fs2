inherit ROOM;
void create() {
	set( "short", "Z" );
	set( "exits", ([
		"zsa"       : "/open/clan/sky-wu-chi/room/room256",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"zeros"     : "/open/clan/sky-wu-chi/room/room243",
		"zzxx"      : "/open/clan/sky-wu-chi/room/room269",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;32mZ[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
