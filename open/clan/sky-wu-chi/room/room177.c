inherit ROOM;
void create() {
        set( "short", "��ʯС·91" );
        set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room14",
		"north"     : "/open/clan/sky-wu-chi/room/hall.c",
		"west"      : "/open/clan/sky-wu-chi/room/room178.c",
        ]) );
        set( "long", @LONG
������������֪���켫�����������ΰ���ŵ���
�����ţ����켫���·���䲻������ȴҲ��һ��������
�е����õط���·�Ե���������������Ŀɰ����
���õ�������ʳ���أ���������ֻ������޼��İ�����
ϲ�������ˡ�


LONG);
        setup();
        replace_program(ROOM);
}

