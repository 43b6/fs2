// board.c
inherit BULLETIN_BOARD;
 
void create()
{
set_name("������ʾ¼",({"soulin board","board"}));
set("location","/open/soulin/room/big");
set("board_id","soulin_b");
set("long"," һ�Ź������ͷ���ϲ����������������!\n");
    setup();
    set("capacity",100);
    set("master",({ "minimum" }) );
}
