inherit ROOM;
void create() {
	set( "short", "������" );
	set( "build", 10140 );
	set( "light_up", 1 );
	set( "owner", "sogo" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room316",
	]) );
	set( "long", @LONG

     ��=================================================================��
     ����                                                   ��          ����
     ���� ��������������                        ����   ������������     ����
     ����    ��       ��                                 ��     ��      ����
     ����    ��       ��    ����������������    ����  ��������������    ����
     ����   ��        ��                          ��    ��  ��  ��      ����
     ����   ��        ��                         ��     ��  ��  ��      ����
     ����   ��  ��������                        ��     ��   ��  ����    ����
     ����                                                               ����
  �t�����s===========================================================�t�����s
     ��                                                                 ��
     ��                                                                 ��



LONG);
	setup();
	replace_program(ROOM);
}