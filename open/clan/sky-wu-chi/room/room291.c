inherit ROOM;
void create() {
	set( "short", "����" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room15",
		"south"     : "/open/clan/sky-wu-chi/room/room289.c",
	]) );
	set( "long", @LONG
���������㷢����ѩ������������...���������˵�������������˼�����
��ʱ�㲻������������Ϊ�Ƿ��Դﵽ����...�Ͱ�������ֻ����٨�...
���������һ̽����
ͻȻ�㱻���ĵ�������...��ȫû�а취�����������ص�����...ֻ����һ������
���������..��ָ˵��һ�仰 ŭ ɱ ն 
LONG);
	setup();
	replace_program(ROOM);
}
