// gfs_b.c ͼ�λ�fs������

inherit BULLETIN_BOARD;

void create()
{
         set_name("ͼ�λ�fs���۰�",({ "gfs board ","board"}));
        set("location","/u/w/wade/gfs");
        set("board_id","gfs_b");
	set("long", @LONG
����һ��ר������ͼ�λ�fs�Ĳ�����
LONG);
	setup();
    set("capacity", 300);
}
