// query_b.c

inherit BULLETIN_BOARD;

void create()
{
         set_name("��ʦ��ƨ������",({ "wizard board ","board"}));
        set("location","/open/wiz/hall1");
        set("board_id","wizard_b");
	set("long", @LONG
����һ��ר�Ÿ���ʦ���й��������Ĳ�����, ����ٷ�ĳ�����Υ��
����, ĳ��ҵĵ�������ȵȡ�
LONG);
	setup();
    set("capacity", 300);
}
