inherit ROOM;
void create() {
	set( "short", "�Ǵ�¥" );
	set( "owner", "biwem" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room355",
	]) );
	set( "long", @LONG
 �뵽�˵أ����������� ˲Ϣ���
��¶¶�Ĳݵ� ������ľǧ�ٷ���
�������������� ů���쬲_����
ҵ������ �Ǵ�¥���� ˲Ϣ���
�ƹ�����ɳ�� ˮ��ֽ��ɳ����
����������� ��������ȴ����
     �Ǵ�¥ �Ǵ�¥
ҵ����ϲ ������ͬ�������ӸǺ� �����糱ˮ
С�� :����ү���ϼ�һ�����������ү���ˡ���
LONG);
	setup();
	replace_program(ROOM);
}
