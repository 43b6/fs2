// neverend_b.c
inherit BULLETIN_BOARD;

void create()
{
	set_name("[1;36m����[1;32m���[0m", ({"dream board","dream","board"}));
	set("location","/u/n/neverend/workroom");
	set("board_id","neverend_b");
	set("long","[1;33m���ɵ���  ����Ʈ�� ��\n\t[1;36m���ڵ���  ������ת ��\n\t\t[1;33mӭ�ŷ�  �������� ��\n\t\t\t[1;36m������  Ʈ����ת �� \n[0m\n");
	setup();
	set("capacity", 500);
	set("master",({"neverend"}));
}
