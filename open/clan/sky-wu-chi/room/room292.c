inherit ROOM;
void create() {
	set( "short", "���鵤ҩ��" );
	set( "build", 3429 );
	set( "owner", "amei" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room293",
	]) );
	set( "long", @LONG
������AMEI�����־�����ҩ֮�еĵ��鵤�ĵط����������Ч
�����ܽ�ٶ���������ϧ������ȴ�޷������ħ���ͺڰ�˫ɷ��
����֮���������е��ϧ��������������˵�ҩ��������ֵ���ơ���
�������Ҫ��һЩ�ǵ�Ҫ��AMEI˵һ��O ��������
LONG);
	setup();
	replace_program(ROOM);
}
