// Կ��, �����ķ����뵽 /u/w/wade/room/key_room �ο�
inherit ITEM;

void create()
{
        set_name("Կ��", ({ "gold key","key", "gold" }) );
        set("unit", "��");
        set("long", "һ�ѿ��������յ�Կ�ף�ר�����������ϵ����õġ�\n");
	// ����������趨�������õķ���
	set ("key_of_room", ({ "/u/w/wade/workroom", "/u/w/wade/room/key_room"}) );
}
