// Կ��, �����ķ����뵽 /u/w/wade/workroom �ο�
inherit ITEM;

void create()
{
        set_name("Կ��", ({ "gold key","key" }) );
        set("unit", "��");
	set ("short", "test");
        set("long", "һ�ѿ��������յ�Կ�ס�\n");
	// ����������趨�������õķ���
	set ("key_of_room", ({ "*" }) );
}

int query_autoload () { return 1; }
