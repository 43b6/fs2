inherit BULLETIN_BOARD;

void create()
{
        set_name("�ɽ������԰�",({"swordsecret board", "board"}));
        set("location","/open/gsword/room/eqroom");
        set("board_id","swordsecret");
        set("long",     "�ɽ������԰档\n");
        setup();
        set("capacity", 30);
    set("master",({"roger"}));
}
