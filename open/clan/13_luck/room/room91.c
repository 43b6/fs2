inherit ROOM;
void create() {
	set( "short", "�̲�԰" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 12006 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room90.c",
		"enter"     : "/open/clan/13_luck/room/room92",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

ǧ  ��  ��  ��  ת  ��  ��  ��  ��  ��  ��
��  ��  ��  Ӧ  ��  ��  ��  ��  ֪  ��  ��
��  ��  ��  ��  ��  ��  ��  ��  ��  ��  
�  ��  ��  ��      ��  ʤ  ��  ��  ʱ  ˮ
��  ȫ  ��      ��  ��  ��  ��  ��  ��  ��
        ��  ��  �          ȥ  ��      ��
    ��      ��  ��      ��          ��  ͷ
    Ը  ��  ��          ��  ��  ��  ��
    ��  ��  ��  ��      Ū  ��  Ϧ  ��
    ��  ��  ��  ��      ��  ��  ��  ��
    ��  ��  ʱ  ��      Ӱ  ¥  ��  ��
        Բ  Բ              ��  ��
        ȱ                  ��

LONG);
	setup();
	replace_program(ROOM);
}
