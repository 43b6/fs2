//Code by Fex ..

inherit BULLETIN_BOARD;

void create()
{
        set_name("�����ʦ���۰�", ({ "board" }) );
        set("location", "/open/wu/hall/wizroom" );
        set("board_id", "fexboard");
        set("long",
                "����һ�������ʦר�õĲ�����, ����Group��ʦʹ��\n"
                ", ��ʦ�ɽ������������д������������,Hitler�пջ�\n"
                "�����۳�֮��������ɲ�..��������ʦ�ο�..cccc...\n");
        setup();
        set("capacity", 50);
        // replace_program(BULLETIN_BOARD);
	// ��������������Щ�� discard post ��, 
	// ���� wade �������� 11/22/1995
	set("master", ({"hitler","oda"}) );
}
