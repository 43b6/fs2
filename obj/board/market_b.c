inherit BULLETIN_BOARD;

void create()
{
        set_name("�м�С��ר�����԰�", ({ "board" }) );
        set("location", "/u/n/nucu/market/markroom");
        set("board_id", "market_b");
        set("long",     "����һ��ר�����м�С���Լ��µ����԰塣\n" );
        setup();
        set("capacity", 30);
        replace_program(BULLETIN_BOARD);
}
