inherit ROOM;
void create() {
	set( "short", "����ռ���ڴ�" );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room130.c",
		"down"      : "/open/clan/hell/room/room132.c",
	]) );
	set( "long", @LONG

��ӭ��λ��������ռ������,ϣ�������ܸ��㲻ͬ�ķ���!!! :)
��������ʹ�� help ָ��Ŷ~~~~~ :)

 �����߾��ǿ���ռ�������۹㳡��
 ����Ϊ���뼼�ܽ��Ե����۹㳡��
 ����Ϊ����������뱸�ݵ����ĵط���
 ����Ϊ�����ƶȽ��Ե���������
 ����ΪΥ������ռ��ƶȵĹ�������
 ��������Ϊ����������ʦ�����
 �������㽫����ʽ�������ռ�����硣

  СŮ��(Little girl)
  $HIC$ͶƱר����$NOR$ (box) [ $HIR$û��ͶƱ�$NOR$ ]
LONG);
	setup();
	replace_program(ROOM);
}
