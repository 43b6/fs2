inherit ROOM;
void create() {
	set( "short", "ʮ������С�ֿ�" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room94",
	]) );
	set( "long", @LONG
�ֿ���ǰ��С��,������ɽ��,ɽ����Ұ����,Ұ�����ƻ�,С�����а׶�,
���Ϸ�̲�,ϷŪ�̲�,������,��ͷtin force...=.= 
    �㷢�����Ϲ�������,����д��:UO�ڴ����ĸ���...
                                ��·������...

LONG);
	setup();
	replace_program(ROOM);
}
