 // Կ��, �����ķ����뵽 /u/w/wade/room/key_room �ο�
#include <ansi.h>
#include "/open/open.h"
inherit ITEM;

void create()
{
        set_name(HIR"Կ��"NOR, ({"red key","key"}) );
        set("unit", "��");
        set("long", "����һ�ѳ����Կ�ס�\n");
        // ����������趨�������õķ���
        set ("key_of_room", ({ POISON_ROOM"path13", POISON_ROOM"room20"}) );
        set("no_drop",1);
}
