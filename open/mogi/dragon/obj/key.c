// Կ��, �����ķ����뵽 /u/w/wade/room/key_room �ο�
inherit ITEM;
#include <ansi.h>

void create()
{
        set_name(HIB"��Կ��"NOR, ({ "bluekey","key", "blue" }) );
        set("unit", "��");
        set("no_auc",1);
set("no_get",1);
set("no_give",1);
        set("long", "һ�ѿ��������յ�Կ�ף�ר�����������ϵ����õġ�\n");
        // ����������趨�������õķ���
        set ("key_of_room", ({ __DIR__"key_room"}) );

}

