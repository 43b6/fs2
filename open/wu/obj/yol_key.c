 // Կ��, �����ķ����뵽 /u/w/wade/room/key_room �ο�
#include <ansi.h>
#include "/open/open.h"
inherit ITEM;

void create()
{
        set_name(HIY"Կ��"NOR, ({"yollow key","key"}) );
        set("unit", "��");
        set("long", "����һ�ѻƳγε�Կ�ס�\n");
        // ����������趨�������õķ���
        set ("key_of_room", ({ "/open/wu/room/gen16"}) );
        set("no_drop",1);
}
