inherit ROOM;
void create() {
	set( "short", "[1;33m����[0m" );
	set( "exits", ([
		"southwest" : "/open/clan/ou-cloud-club/room/room309.c",
		"enter"     : "/open/clan/ou-cloud-club/room/room314",
	]) );
	set( "long", @LONG
����ĺ�ˮ������ֽ��е㲻��ʹ������������ԭʼ��
��ȴ���㲻�Ծ��Ļ����ֽ�ǰ����������Ҳ����Ӧ��������
���Σ��������£���������͸��ˮ���Щ΢����֮�⣬����
����һƬ���ɲ�Ĳ��̣�ż��һСȺ������������ι���ȴ
����Ϊ���ͻȻ���ֶ��������ţ����ˣ����ǿ��ҳ��ڰɡ�
��
LONG);
	setup();
	replace_program(ROOM);
}
