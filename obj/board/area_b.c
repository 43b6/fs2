inherit BULLETIN_BOARD;

void create()
{
	set_name("�������۰�", ({ "area board", "board" }) );
	set("location", "/open/wiz/area");
	set("board_id", "area_b");
	set("long", @LONG
����ר���ṩ��ʦ������������������˿������ļ�¼�õ�
����, ��˭�븺��ĳһ����? ��˭��ж��? ��˭�����ĳһ����?
��˭�˳�ĳһ����? ���߼�������Ū������, ����������֧Ԯ..
LONG);
	setup();
	set("capacity", 50);
}
