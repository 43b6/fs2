inherit BULLETIN_BOARD;

void create()
{
        set_name("ʥ������԰�", ({ "prayer board","board" }) );
        set("location", "/u/r/rence/room/punch1-2");
        set("board_id", "prayer_b");
        set("long",     "ʥ��̸�����������������Ե�.\n");
        setup();
        set("capacity", 30);
        set("master", ({"rence","kael"}) );
}