inherit ROOM;
void create() {
	set( "short", "T" );
	set( "exits", ([
		"timekiller" : "/open/clan/sky-wu-chi/room/room120",
		"tony"      : "/open/clan/sky-wu-chi/room/room363",
		"thundergod" : "/open/clan/sky-wu-chi/room/room153",
		"out"       : "/open/clan/sky-wu-chi/room/room17",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;30mT[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
